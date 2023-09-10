#include <stdio.h>

int main()
{
    int num;
    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

	for (int a = num;a >= 1;a--) {
		for (int b = 1;b <= a;b++) {
			printf("*");
		}
		puts("");
	}
}

