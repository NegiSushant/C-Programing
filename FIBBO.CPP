#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i, a=0, b=1, num;
int c = a + b;
printf("Enter the number: ");
scanf("%d", &num);

printf(" %d %d", a, b); //printing 0 and 1.
for(i = 2; i<=num; i++){
	if(c<num){
	printf(" %d", c);
	a=b;
	b=c;
	c = a+b;
	}
	else{
	break;
	}


}
getch();
}