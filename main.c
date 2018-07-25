#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "zStack.h"

int main(){
	srand(time(0));
    int getNumber();  
    int getRandNum();


    int count;
    printf("elements of the stack >:");
    count = getNumber();

	struct zStack *top = calloc(1, sizeof(struct zStack*));

	top = First(getNumber());
	for(int i = 0; i < count-1; i++){
		Push(&top, getNumber());
	}

	while(top){
		printf("\n%d", Pop(&top));
	}
	return 0;
}

int getNumber(){
    int num;
    scanf("%d", &num);
    return num;
}

int getRandNum(){
    return (100 - rand()%200);
}



