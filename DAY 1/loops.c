#include <stdio.h>
#include<conio.h>
void reverse();
void printall();
void reverseinwhile();
int main() {
    reverseinwhile();
        //printall();
    printf("\n");
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
        /* code */
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