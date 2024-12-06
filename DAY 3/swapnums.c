#include <stdio.h>
#include <string.h>
#include<conio.h>

int main() {
    char str[100], temp;
    printf("Enter a string: ");
    gets(str);

    int i = 0, rev = strlen(str) - 1;

    while (i < rev) {
        if (str[i] >= '0' && str[i] <= '9') {
            while (str[rev] < '0' || str[rev] > '9') {
                rev--;
            }
            temp = str[i];
            str[i] = str[rev];
            str[rev] = temp;
            rev--;
        }
        i++;
    }

    printf("Modified string: %s\n", str);
    getch();
    return 0;
}
