#include <stdio.h>
int main(){
    int productnum, i;
    float cost, quantity;
    float profitmargin, discountrate, totalcost, profit, afterprofit, discountamount, afterdiscount, vat, finalprice;
    
    printf("Enter the number of products:");
    scanf("%d", &productnum);
    //There was no specific number of product so I used for loop
    
    for (i = 1; i <= productnum; i++) {
        printf("Product %d:\n", i);
        printf("Enter cost price: ");
        scanf("%f", &cost);
        printf("Enter quantity: ");
        scanf("%f", &quantity);
        
        totalcost += cost * quantity;
        
    }
    
    printf("Enter profit margin (in percentage): ");
    scanf("%f", &profitmargin);
    printf("Enter discount rate (in percentage): ");
    scanf("%f", &discountrate);
    
    profit = (profitmargin/100) * totalcost;
    afterprofit = totalcost + profit;
    
    discountamount = (discountrate/100) * afterprofit;
    afterdiscount = afterprofit + discountamount;
    
    vat = 0.15 * afterdiscount;
    finalprice = afterdiscount + vat;
    
    printf("Total cost: %.2f\n", totalcost);
    printf("Profit (%.0f%%): %.2f\n", profitmargin, profit);
    printf("After profit: %.2f\n", afterprofit);
    printf("Discount (%.0f%%): %.2f\n", discountrate, discountamount);
    printf("After discount: %.2f\n", afterdiscount);
    printf("VAT (15%%): %.2f\n", vat);
    printf("Final selling price: %.2f\n", finalprice);

    return 0;
    
}