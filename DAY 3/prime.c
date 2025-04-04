#include<stdio.h>
#include<conio.h>
/*int prime(int num,int i){
    if(num == 2) return 1;
    if(num%i==0)
    {
    return 0;
    }
    if(i < num/2){
    i++;
       return prime(num,i); 
    }
}*/

int prime(int a, int count , int div){
    if(div > a) return count;
    else{
        if(a%div==0) count++;
        return prime(a,count,div+1);
    }
}
int main(){
    int num, x;
    printf("Enter a number : ");
    scanf("%d",&num);
    x = prime(num,0,1);
    /*for (int i = 2; i < num/2; i++)
    {
        if(num%i==0){
            x = 0;
            break;
        }
        0.....................................0
    }*/
   
    if(x==2){
        printf("Prime Number");
    }
    else{
        printf("Not a prime number");
    }

        getch();
        return 0;
    }


