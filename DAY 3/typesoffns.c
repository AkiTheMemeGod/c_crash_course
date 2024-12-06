#include<stdio.h>
#include<conio.h>
#include<string.h>

//without return no arguements
void hello(){
    printf("Hello world\n");
}

//without return with arguements
void peri(int a,int b){
    printf("Perimeter of the rectangle is : ",a,b,2*a+2*b);
}
//with return with arguements
float area(float a,float b){
    return a*b;
}
//with return no arguements
float volume(){
    float a,b,c;
    printf("Enter any length and breadth and height : ");
    scanf("%f %f %d",&a,&b,&c);
    return a*b*c;

}

int main(){
    hello();
    int a,b;
    printf("Enter any length and breadth : ");
    scanf("%d %d",&a,&b);
    peri(a,b);
    printf("Area of the rectangle is : %.2f",area(a,b));
    printf("Volume of the cuboid is : %d",volume);

    getch();
    return 0;
}