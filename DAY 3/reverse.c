#include <stdio.h>
#include <string.h>
#include<conio.h>

int main() {
    char str[10][50], temp;
    printf("Enter a string: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s",str[i]);
        //printf("%s",str[i]);
    }
    printf("Modified string:");

    for (int i = 4; i >=0; i--)
    {
        printf("%s ",str[i]);
    }
    
    getch();
    return 0;
}
