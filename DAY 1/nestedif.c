#include<stdio.h>
#include<conio.h>
int main(){
    char gender;
    scanf("%c",&gender);

    if (gender == 'M' || gender == 'm'){
        int age;
        scanf("%d",&age);
        if(age>=18){
            printf("\nValid for vote");
        
        }else
        {
            printf("\nNot Valid for Vote");
        }
        
    }else{
        printf("\nInvalid Gender, Opinion Rejected");
        }
        getch();
        return 0;
}