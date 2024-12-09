#include <stdio.h>
#include <string.h>
#include<conio.h>

int main() {
    char str[100], *p;
    printf("Enter a string: ");
    scanf("%s",str);
    ///printf("Modified string:");
    int len = strlen(str);
    p=str;
    for(int i = len - 1; i >=0; i--)
    {
        printf("%c",*(p+i));
    }
    
    getch();
    return 0;
}
