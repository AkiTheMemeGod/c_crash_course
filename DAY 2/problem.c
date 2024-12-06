#include <stdio.h>
#include <conio.h>
int main()
{
    int i, num, sum = 0;
    
    for (i = 0; num!=-1; i++)
    {
        printf("Enter the %d number : ",i+1);
        scanf("%d",&num);  
        sum += num;
    }
    printf("%d",sum);

    /*do
    {

        scanf("%d", &num);

        if (num != -1)
        {
            sum += num;
        }
    } while (num != -1);
    printf("%d", sum);*/

    getch();
    return 0;
}