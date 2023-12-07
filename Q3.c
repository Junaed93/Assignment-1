#include <stdio.h>
int main(){
    int age,student;
    
    printf("Enter your age:");
    scanf("%d", &age);
    
    printf("Are you a student? (1 for yes, 0 for no):");
    scanf("%d", &student);
    
    float ticketprice;
    ticketprice = 10.00;
    
    if(age<5){
        printf("The ticket price is: $0.00\n");
    }else if(age>=5 && age<= 12){
        ticketprice *= 0.5;
        printf("The ticket price is: $%.2f\n", ticketprice);
    }else if(age >= 13 && age <= 17 && student==1){
        ticketprice *= 0.75;
        printf("The ticket price is: $%.2f\n", ticketprice);
    }else if(age >= 18 && student==1){
        ticketprice *= 0.90;
        printf("The ticket price is: $%.2f\n", ticketprice);
    }else{
        printf("The ticket price is: $10.00\n");
    }
    
    return 0;
}
