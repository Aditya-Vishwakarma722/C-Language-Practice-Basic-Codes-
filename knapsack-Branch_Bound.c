#include<stdio.h>

int w[10],p[10],n,MaxProfit = 0;

void knapsack(int i, int current_weight, int current_profit, int capacity){
    if(current_weight <= capacity && current_profit > MaxProfit){
        MaxProfit = current_profit;
    }

    if(i == n){
        return;
    }

    if(current_weight + w[i] <= capacity){
        knapsack(i+1, current_profit+w[i], current_profit+p[i], capacity);
    }

    knapsack(i+1, current_weight, current_profit, capacity);
}

int main(){
    printf("Enter the Number of Items : ");
    scanf("%d",&n);

    printf("Enter the Weight of the Items :\n");
    for(int i =  0; i < n ; i++){
        scanf("%d",&w[i]);
    }

    printf("Enter the Profit of the Items :\n");
    for(int i =  0; i < n ; i++){
        scanf("%d",&p[i]);
    }

    int capacity;

    printf("Enter the total Capactiy : ");
    scanf("%d",&capacity);

    knapsack(0,0,0,capacity);
    printf("Maximum Profit : %d",MaxProfit);
}