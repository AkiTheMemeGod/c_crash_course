#include<stdio.h>
#include<conio.h>
void maxof2(int,int);
void maxof3(int , int , int);
void min(int, int, int);
int main(){
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Enter the third number : ");
    scanf("%d",&c);
    //max(a,b);
    //max3(a,b,c);
    min(a,b,c);
    
    getch();
    return 0;
}

void maxof2(int a,int b){
    if(a>b){
        printf("%d is greater\n", a);
    }
    else
    {
        printf("%d is greater\n", b);
    }
}

void maxof3(int a ,int b, int c){
    if(a>b && a>c){
        printf("%d is greater", a);
    }
    else if(b>a && b>c)
    {
        printf("%d is greater", b);
    }
    else{
        printf("%d is greater",c);
    }
}

void min(int a ,int b, int c){
    if(a<b && a<c){
        printf("%d is smaller", a);
    }
    else if(b<c)
    {
        printf("%d is smaller", b);
    }
    else{
        printf("%d is smaller",c);
    }
}
