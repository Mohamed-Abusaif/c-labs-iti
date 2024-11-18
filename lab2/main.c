#include <stdio.h>
#include <stdlib.h>

int main()
{

//Q1)




//Q2)

    printf("Hello world!\n");
    int sum = 0;
    int userNumber = 0;
    while(sum < 100){
    printf("Enter Number: ");
    scanf("%d", &userNumber);
    sum = sum+userNumber;
    }

//Q3)

    printf("Please Enter Your order Choice:");
    int userChoice;
    scanf("%d" , &userChoice);
    if(userChoice == 1){
    printf("Cheese Pizza!");
    }
    else if (userChoice == 2){
    printf("Beef Burger");
    }
    else if (userChoice == 3){
    printf("Chicken Strips");
    }
    else{
    printf("Thank You for Choosing Your Order!");
    }

//Q4)
/*
    int firstNum =10;
    int secondNum = 10 ;

    printf("Multiplication Table from 1 to 10:\n\n");

    for (int i = 1; i <= firstNum; i++) {
        for (int j = 1; j <= secondNum; j++) {
            printf("%3d ", i * j);
        }
        printf("\n");
    }
*/

//Q5)
    int firstNum =1;
    int secondNum = 1 ;

    printf("Multiplication Table from 1 to 10:\n\n");

    for (int i = 10; i >= firstNum; i-- ){
        for (int j = 10 ;j >= secondNum; j--) {
            printf("%3d ", i * j);
        }
        printf("\n");
    }


    return 0;
}
