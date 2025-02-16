
#include <stdio.h>

int main() {

    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses, totalCost, totalFoodCost;
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &budget, &numGuests, &foodCostPerGuest, &decorationCost, &musicCost, &extraExpenses);
    totalCost = numGuests*foodCostPerGuest + decorationCost + musicCost + extraExpenses;
    totalFoodCost =foodCostPerGuest*numGuests;
    
    if (numGuests > 25 && musicCost == 0) {
        printf("Celebration Denied\n");
    } 
    else if (totalCost<=budget && (numGuests>5 && numGuests<=50) && (decorationCost<(budget*30/100) || totalFoodCost<(budget*50/100))){
        printf("Celebration Approved");
    }
    else{
        printf("Celebration Denied");
    }
    
    return 0;
}
