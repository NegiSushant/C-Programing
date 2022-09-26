#include<stdio.h>
#include<conio.h>

int main(){
clrscr();

int i, j, n;

printf("Please enter the number of row: ");
scanf("%d", &n);

for(i = 1; i <= n; i++)
{
	for(j = 1; j <=(n+1)-i; j++)
	{
		printf("* ");
	}
	printf("\n");
}
getch();
return 0;
}