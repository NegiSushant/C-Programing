#include<stdio.h>
#include<conio.h>

int main(){
clrscr();
int num, rem, new_num = 0;

printf("Enter the number: ");
scanf("%d", &num);

while(num > 0){
	rem = num % 10;
	new_num = new_num * 10 + rem;
	num = num / 10;
}
printf("%d", new_num);
getch();
return 0;
}