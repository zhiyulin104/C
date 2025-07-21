# include <stdio.h>
# include <stdbool.h>

int main() {
    int M;
    scanf("%d", &M);
    bool prime_number = true;
    for (int i = 2; i < M; ++i) {
        if (M % i == 0) {
            prime_number = false;
            break;
        }
    }
    if (M == 1) {
    	printf("NO");
    }
    else {
        if (prime_number) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    return 0;
}