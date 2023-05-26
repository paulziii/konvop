#include<stdio.h>
int main(){
	int a,b;
	printf("enter decimal 1:");
	scanf("%i", &a);
	printf("enter decimal 2:");
	scanf("%i", &b);
	int c=a+b;
	int d=a-b;
	int e=a*b;
	printf("summa:%i\n", c);
	printf("raznost:%i\n", d);
	printf("proizvedenie:%i\n", e);
}
