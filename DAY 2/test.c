#include <stdio.h>
void main(){
int sum=0,arr[6];
for(int i = 0; i < 6;i++)
{
scanf("%d ",&arr[i]);
}
for(int i = 0; i < 6; i++)
{
sum+=arr[i];
}printf("Total: %d\n",sum);
}