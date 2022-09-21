#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int num, count = 0;

	printf("Please enter the number: ");
	scanf("%d", &num);

	while(num > 0){
		num = num / 10;
		count++;
	}
	printf("%d", count);
	getch();
}
