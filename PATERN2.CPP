#include<stdio.h>
#include<conio.h>

int main(){
clrscr();

int i, j, n, a;

printf("please enter the number of row: ");
scanf("%d", &n);

for(i = 1; i<=n; i++)
{
	a = 65;
	for(j = 1; j <= i; j++)
	{
		printf("%c ", a);
		a++;
	}
	printf("\n");
}
getch();
return 0;
}