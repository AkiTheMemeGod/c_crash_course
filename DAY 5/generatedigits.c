#include <stdio.h>
#include <conio.h>

int sum(int a, int b) {
    if (b == 0)
        return a;
    else if(b<0){
        return sum(a-1,b+1);
    }
    else
        return sum(a+1, b-1);
}

int main() {
    int a, b,sums;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    sums = sum(a, b);
    printf("\nSum: %d", sums);

    getch();
    return 0;
}
