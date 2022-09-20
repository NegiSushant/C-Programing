#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
clrscr();
int num, count = 0, flag, i;
for(num = 2; count <= 100; num++){
	flag = 0;
	for(i = 2; i <= sqrt(num); i++){
		if(num % i == 0){
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		printf("%d ", num);
		count++;
	}
}
getch();
return 0;
}