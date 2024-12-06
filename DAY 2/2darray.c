#include<stdio.h>
#include<conio.h>
int main(){
int row,col,i,j;
printf("Enter row size : ");
scanf("%d",&row);
printf("Enter column size : ");
scanf("%d",&col);
int a[row][col],b[row][col],sum[row][col];
for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{   
printf("enter the value for a[%d][%d] : ",i,j);
scanf("%d",&a[i][j]);
}

}
for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{   
printf("enter the value for b[%d][%d] : ",i,j);
scanf("%d",&b[i][j]);
}

}
for(int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{   
sum[i][j] = a[i][j] + b[i][j];
}

}
printf("Matrix : \n");
for(int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{
printf("%d ",sum[i][j]);
}
printf("\n");
}
getch();
return 0;
}