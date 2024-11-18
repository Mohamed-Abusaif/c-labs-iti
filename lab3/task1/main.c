#include <stdio.h>
#include <stdlib.h>

int main()
{

//Q1) Array Creation + Printing using 2 for loops

int myArray [12];
int solutionArray[1000][1000];

int index = 0;

int userInput=0;
int rows=0;
int columns=0;
printf("Enter Number of Rows:");
scanf("%d" , &rows  );
printf("Enter Number of Columns:");
scanf("%d" , &columns  );

for(int i=0; i<12; i++){
printf("Enter number %d: ", i + 1);
scanf("%d" , &userInput  );
myArray[i]= userInput;
}


for(int i=0; i<rows; i++){

    for(int j=0; j<columns; j++)
    {
    solutionArray[i][j] = myArray[index++];
    printf("%d" , solutionArray[i][j] );
    printf(" ");
    }
printf("\n");
}


return 0;

}





