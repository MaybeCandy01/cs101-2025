#include<stdio.h>

int main(){
	char a = 5;
	printf("\t%d\n", a^1);//XOR
	printf("\t%d\n", ~a);//NOT
	printf("\t%d\n", a>>1);//右移
	printf("\t%d\n", a<<1);//左移 

	return 0;
}
