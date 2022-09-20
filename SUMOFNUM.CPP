#include<stdio.h>
#include<conio.h>

int main(){
clrscr();
int num, rem, sum = 0;
printf("Please enter the number: ");
scanf("%d", &num);

while(num > 0){
	rem = num % 10;
	sum = sum + rem;
	num = num / 10;
}
printf("Sum of num is: %d ", sum);
getch();
return 0;
}