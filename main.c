#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//	 @zfrgrkn ----- Fibonacci sayıları diziler -- --- - - 
		
		int fibonacci[20];
		fibonacci[0]=1;
		fibonacci[1]=1;
		int i;
		printf("%d\n",fibonacci[0]);
		printf("%d\n",fibonacci[1]);
		for(i=2;i<20;i++)
			{
				fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
				printf("%d\n",fibonacci[i]);
	
			}
			
		// Fibaonacci SAyılarını ekrana yazdırdık...	
	return 0;
}
