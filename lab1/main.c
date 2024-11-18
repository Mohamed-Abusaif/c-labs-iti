#include <stdio.h>
#include <stdlib.h>

int main()
{
char y = 'A';
int  x = 10;
float z = 10.5;
char f;

printf(" Y =%c X =%d Z =%0.1f  \n",y ,x, z);
printf("Enter F: ");
scanf("%c" ,&f);
printf("F= %c F=%d \n",f,f);
printf("Hexa=%x Octal=%o \n",x,x);

return 0;
}
