#include <stdio.h>

int main() {
	int integer1,sum;
	printf("請輸入第一個整數: ");
	scanf("%d", &integer1);
	sum = (integer1 + 1) * integer1 /2;
	printf("答案=%d.\n",sum);
	return 0;
}
