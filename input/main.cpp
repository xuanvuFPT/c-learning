#include <stdio.h>
#include <string.h>

int main() {
	int a, b;
	char c;
	char str[100];
	
//	printf("Vui long nhap gia tri a:");
//	scanf("%d", &a);
	
//	printf("Vui long nhap gia tri b:");
//	scanf("%d", &b);
	
	// Phep chia 8 % 3 = 2.6666 => ep kieu so thuc
//	printf("a / b = %f", a / (float)b);
	
	// dau break line
//	printf("\n");
	
	// Chia lay phan nguyen (ap dung cho so nguyen) 8 % 3 = 2.6666 => lay 2
//	printf("a %% b = %d", a % b);
	
	// dau break line
//	printf("\n");
	
//	printf("Vui long nhap 1 ky ty:");
//	scanf("%c", &c);
//	printf("ky tu ban vua nhap la = %c", c);
	
	// dau space ( ) ~ \0 => dau thuc chuoi
	// https://nguyenvanhieu.vn/nhap-xuat-chuoi-trong-c/
	printf("Vui long nhap ten cua ban:");
	fgets(str, sizeof(str), stdin);  // read string
	printf("Ten cua ban la = %s", str);
	
	return 0;
}
