#include <stdio.h>
#include <string.h>
#include <conio.h>
#include<ctype.h>

int main() {
    char str[100], digit[100], digitrev[100],temp;
    int digindex[100],digindexrev[100], count = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    
    int len = strlen(str);
    str

    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digit[count] = str[i];
            digindex[count] = i;
            count++;
        }
    }

    digit[count] = '\0'; 

    for (int i = 0; i < count; i++) {
        digitrev[i] = digit[count - 1 - i];
    }
    digitrev[count] = '\0'; 

    printf("\n");
    for (int i = 0; i < count; i++) {
        digindexrev[i] = digindex[count - 1 - i];
    }

    for (int i = 0; i < strlen(digitrev); i++) {
        temp = str[digindex[i]];
        str[digindex[i]] = digitrev[i];
        digitrev[i] = temp;
            
        }
    
    puts(str);
    getch();
    return 0;
}
