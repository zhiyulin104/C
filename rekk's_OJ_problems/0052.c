# include <stdio.h>
# include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);  // 第一行：市民數

    int *ages = malloc(sizeof(int) * N);  // 動態配置陣列

    // 第二行：輸入 N 個年齡
    for (int i = 0; i < N; i++) {
        scanf("%d", &ages[i]);
        getchar(); // 故意吃一個字元->空白
    }

    // 第三至六行：各年齡段的補助金額
    int W, X, Y, Z;
    scanf("%d", &W);
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);

    // 計算總金額
    long long int total = 0;
    for (int i = 0; i < N; i++) {
        int age = ages[i];
        if (age >= 65) {
            if (age < 80) {
    			total += W;
            }
        	else if (age < 90) {
    			total += X;
            }
        	else if (age < 100) {
    			total += Y;
            }
        	else {
        		total += Z;
            }
        }
    }
    printf("%lld", total);

    free(ages);  // 釋放記憶體
    return 0;
}