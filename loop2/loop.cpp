#include <stdio.h>

int main() {
	int so_nguyen[5] = {1, 2, 3, 4, 5};	// ~ so_nguyen[0] = 1, so_nguyen[1] = 2, ...
	
	// Gia tri  dau tien cua mang
//	printf("Gia tri dau tien cua mang = %d", so_nguyen[0]);
	
	// Gia tri  dau tien cua mang
//	printf("\nGia tri cuoi cung cua mang = %d", so_nguyen[5]);

	for (int i = 1; i <= 12; i++) {
		//buoc 1: gan' i = 1 => so sanh i <= 5 (1 <= 5) => in gia tri cua i => quay nguoc len cong i = i + 1
		// buoc 2: so sanh i <= 5 (2 <= 5) => in gia tri cua i => quay nguoc len cong i = i + 1
		// lap lai buoc 2
        printf("%d ", i);
    }
    
    printf("\n ");
    
    for (int i = 0; i < 5; i++) {
		//buoc 1: gan' i = 1 => so sanh i <= 5 (1 <= 5) => in gia tri cua i => quay nguoc len cong i = i + 1
		// buoc 2: so sanh i <= 5 (2 <= 5) => in gia tri cua i => quay nguoc len cong i = i + 1
		// lap lai buoc 2
        printf("so_nguyen[%d] = %d ", i, so_nguyen[i]);	// => 0, ..., 4
    }

	return 0;
}

