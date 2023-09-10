#include <stdio.h>

void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
        for (int j = 0; j < i; j++) {
            for (int k = 0; k <= j; k++) {
                printf("* ");
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    int num;
    printf("숫자를 입력하세요: ");
    scanf("%d", &num);
    print_pattern(num);
    
    return 0;
}
