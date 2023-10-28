#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;

	for(a=1;a<=100;a++){
	
	if(a%3==0){
		printf("fizz:  %d \n",a);
	}else if (a%5==0){
		printf("buzz:  %d \n",a);
	}else if (a%3==0 && a%5==0){
		printf("fizzbuzz: %d \n",a);
	}else {
		printf("%d \n",a);
	}
}

return 0;
}
