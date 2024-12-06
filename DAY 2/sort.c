#include<stdio.h>
#include<conio.h>
int main(){
int n,temp;
printf("Enter the size of the array = ");
scanf("%d",&n);
int arr[n];
for (int i = 0; i < n; i++)
{
printf("Enter the value for arr[%d] = ",i);
scanf("%d", &arr[i]);
}
printf("\nElement before sorting is : ");
for (int i = 0; i < n; i++)
{
printf(" %d",arr[i]);

}

for (int i = 0; i < n; i++)
{
for (int j = i+1; j < n; j++){

if (arr[i] < arr[j])
{
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
printf("\nElement after sorting is :a ");
for (int i = 0; i < n; i++)
{
printf(" %d",arr[i]);

}
getch();
return 0;
}