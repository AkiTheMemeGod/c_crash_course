#include<stdio.h>
#include<conio.h>
int a, b, c = 0;
void prtFun(void);
int main(){
    int i;
    auto int i = 1050;
	static int a = 1;
	prtFun();
	a += 1;
	prtFun();
	printf("%d %d\n" , a, b) ;


    getch();
    return 0;

}
void prtFun(void) {
	static int a = 2;
	int b = 1;
	a += ++b;
	printf("%d %d\n" , a, b);
}