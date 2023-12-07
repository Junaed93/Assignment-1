#include <stdio.h>
int main(){
    int month, year;
    
    printf("Enter the month (1 to 12):");
    scanf("%d", &month);
    
    if(month == 4 || month ==6 || month == 9 || month == 11){
        printf("The number of days in month %d is 30.\n", month);
    }else if(month == 2){
        printf("Enter the year:");
        scanf("%d", &year);
        
        if(year %4 ==0){
            printf("The number of days in month 2 is 29.\n");
        }else{
            printf("The number of days in month 2 is 28.\n");
        }
    }else if(month < 1 || month > 12){
        printf("Invalid month. Please enter a month between 1 and 12.\n");
    }else{
        printf("The number of days in month %d is 31.\n", month);
    }
    
    return 0;
}