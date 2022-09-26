#include<stdio.h>
#include<conio.h>

int main(){
clrscr();

int i, j, a;

printf("Please enter the number of row: ");
scanf("%d", &a);

for(i = 1; i <= a; i++)
{
	for(j = 1; j <= i; j++)
	{
		printf("* ");
	}
	printf("\n");
}
getch();
return 0;
}