#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int num;
	int trial = 0;
	
	do
	{
		//1. input
		printf("guess a number : ");
		scanf("%d", &num);
		
		//2. decision(low/high) (wrong answer)
		trial =  trial + 1;
		
			if(num>answer)
			printf("high");
			
			else if(num<answer)
			printf("low");
			
			else
			break;	
	}
	while(num = answer); //3. loop condition : answer is equal to num?
		printf("Congratulation! trial : %d", trial);
	
	system("PAUSE");
	return 0;
}
