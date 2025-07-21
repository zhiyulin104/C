# include <stdio.h>

int main() {
    int largest_num;
    int a;
    int lines;
    scanf("%d", &largest_num);
    a = largest_num - 1;
    for (int k = 1; k <= largest_num; ++k) {
        int i = 1;
        for (i; i <= k; ++i) {
            printf("%d", i);
        }
        printf("\n");
    }
    for (a; a > 0; --a) {
        int j = 1;
        for (j; j <= a; ++j) {
            printf("%d", j);
        }
        if (a != 1) {
            printf("\n");
        }
    }
}