#include <stdio.h>

int get_same_q_and_r_sum(n) {
    int res = 0;
    for (int i = 1; i < n; i++) {
        res += i * (n + 1);
    }
    return res;
}

int main()
{
    int N;
    printf("자연수 N을 입력하세요: ");
    scanf("%d", &N);
    int sum = get_same_q_and_r_sum(N);
    printf("나머지와 몫이 같은 모든 자연수의 합은: %d\n", sum);
}