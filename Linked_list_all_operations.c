#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node *create_node(int data) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    return ptr;
}

void insert_at_start(int data) {
    struct node *ptr = create_node(data);
    ptr->next = head;
    head = ptr;
}

void insert_at_end(int data) {
    struct node *ptr = create_node(data);
    if (head == NULL) {
        head = ptr;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = ptr;
}

void insert_at_position(int location, int data) {
    if (location == 1) {
        insert_at_start(data);
        return;
    }

    struct node *temp = head;
    for (int i = 1; i < location - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid Location\n");
        return;
    }

    struct node *ptr = create_node(data);
    ptr->next = temp->next;
    temp->next = ptr;
}

void delete_at_beginning() {
    if (head == NULL) {
        printf("List is Empty.\n");
        return;
    }

    struct node *temp = head;
    head = head->next;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}

void delete_at_end() {
    if (head == NULL) {
        printf("List is Empty.\n");
        return;
    }

    if (head->next == NULL) {
        printf("Deleted: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    struct node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    printf("Deleted: %d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;
}

void delete_at_position(int pos) {
    if (head == NULL) {
        printf("List is Empty.\n");
        return;
    }

    if (pos == 1) {
        delete_at_beginning();
        return;
    }

    struct node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position Invalid.\n");
        return;
    }

    struct node *after = temp->next;
    temp->next = after->next;
    printf("Deleted: %d\n", after->data);
    free(after);
}

void display() {
    if (head == NULL) {
        printf("List is Empty.\n");
        return;
    }

    struct node *temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void search(int key) {
    struct node *temp = head;
    int pos = 1;
    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element %d found at position %d\n", key, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element %d not found.\n", key);
}

int main() {
    int choice, data, pos, key;

    while (1) {
        printf("\n--- Linked List Operations ---\n");
        printf("1. Insert at Beginning\n2. Insert at End\n3. Insert at Position\n");
        printf("4. Delete from Beginning\n5. Delete from End\n6. Delete at Position\n");
        printf("7. Display List\n8. Search Element\n9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insert_at_start(data);
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                insert_at_end(data);
                break;
            case 3:
                printf("Enter position and data: ");
                scanf("%d %d", &pos, &data);
                insert_at_position(pos, data);
                break;
            case 4:
                delete_at_beginning();
                break;
            case 5:
                delete_at_end();
                break;
            case 6:
                printf("Enter position: ");
                scanf("%d", &pos);
                delete_at_position(pos);
                break;
            case 7:
                display();
                break;
            case 8:
                printf("Enter element to search: ");
                scanf("%d", &key);
                search(key);
                break;
            case 9:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
