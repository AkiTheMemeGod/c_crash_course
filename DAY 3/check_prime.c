#include<stdio.h>
#include<conio.h>
int main(){


    int x, count = 0;
    printf("Enter a number : ");
    scanf("%d",&x); 

    if(x == 0){
        printf("not a prime number");
                getch();
        return 0;
    }
    for(int i = 1;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }

    if(count == 2){
        printf("prime number");

    }
    else{
        printf("not a prime number");
    }
        getch();
        return 0;
    }

