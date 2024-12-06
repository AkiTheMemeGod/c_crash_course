#include <stdio.h>
#include<conio.h>
void reverse();
void printall();
void myDowhile();
void reverseinwhile();
int main() {
    //reverseinwhile();
        //printall();
    printf("\n");
    myDowhile();
    //reverse();
    getch();
    return 0;
}

void reverseinwhile(){
    int n = 65;
    while (n <= 90)
    {
        printf("%c\n",n);
        n++;
    }
    
}

void reverse(){
for (int i = 90; i >= 65; i--) {
        printf("%c\n", i);
    }

}

void printall(){
    for (int i = 65; i <= 90; i++) {
        printf("%c\n", i);
    }
    
}

void myDowhile(){
    int x = 5,fact = 1;
    
    do
    {
        fact = fact*x;
        x--;
    } while (x > 0);
    printf("%d",fact);
    

}