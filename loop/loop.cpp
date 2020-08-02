#include <stdio.h>

int main() {
//	int so_nguyen[5] = [1, 2, 3, 4, 5];



	int a = 10;
	int b = 2;
	
	// a++ => a = a + 1; 
	printf("\n a++");
	printf("\na = %d", a);
	printf("\n");
	printf("a + b = %d", (a++) + b);	// => Lan dua in a + b ~ 10 + 2 = 12, sau do no gan a = a + 1 => a = 10 + 1
	printf("\n");
	printf("a = %d", a);
	printf("\n");
	printf("a + b = %d", a + b);
	
	// ++a
	int c = 10;
	int d = 2;
	
	printf("\n ++c");
	printf("\nc = %d", c);	// c = 10
	printf("\n");
	printf("c + d = %d", (++c) + d);	// => c = c + 1 => sau do c(11) + b(2) = 13
	printf("\n");
	printf("c = %d", c);	// c = 11
	printf("\n");
	printf("c + d = %d", c + d);
	
	return 0;
}

