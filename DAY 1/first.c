#include <stdio.h>
#include<conio.h>
int main() {
    int age ;
    float height;
    char initial;
    char name[100];
    printf("Enter Name :");
    scanf("%s",name);
    printf("Enter initial :");
    scanf(" %c",&initial);
    printf("Enter age :");
    scanf("%d",&age);
    printf("Enter height :");
    scanf("%f",&height);
    

   printf("Name = %s %c\n",name,initial);
 
printf("Age = %d\n",age);
printf("Height = %0.2f\n",height);
getch();
return 0;
}