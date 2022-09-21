#include<stdio.h>
#include<conio.h>

int main(){
clrscr();
int num, power, result = 1, i;
printf("Enter the number: ");
scanf("%d", &num);

printf("Enter the power of number: ");
scanf("%d", &power);

for(i = power; i > 0; i--){
	result = result * num;

}
printf("%d", result);
getch();
return 0;

}