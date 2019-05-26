#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a1,a2;
	double d1,d2;
	int i1,i2;
	printf("a1=%p,a2=%p\n",&a1,&a2);
	printf("d1=%p,d2=%p\n",&d1,&d2);
	printf("i1=%p,i2=%p\n",&i1,&i2);
	system("pause");
	return 0;
}
