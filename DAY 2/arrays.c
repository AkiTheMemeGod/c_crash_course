#include <stdio.h>
#include <conio.h>
int main(){
int n,sum=0;
printf("Enter the size of the array");
scanf("%d",&n);
int arr[n];
for (int i = 0; i < n; i++)
{
printf("Enter the value for arr[%d] = ",i);
scanf("%d", &arr[i]);
}
for (int i = 0; i < n; i++)
{
sum += arr[i];
if (i+1%2==0)
{
printf("Cube of all the elements in the array is %d\n",arr[i]*arr[i]);
}
else{
printf("Cube of all the elements in the array is %d\n",arr[i]*arr[i]*arr[i]);
}
}
printf("Average of all the elements in the array is %d",sum/n);



getch();
return 0;
}