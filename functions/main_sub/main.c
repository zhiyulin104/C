# include <stdio.h>
# include "list.h"
# define MAX_N 8
# define GET_RET(x) ((x) == 0 ? "false" : "true")
int main() {
    int arr[MAX_N], n, i, cnt = 0, ret;
    while (scanf("%d", &n) != EOF) {
        // 新增數字進入陣列
        ret = insertNumber(arr, &cnt, MAX_N, n);
        printf("%d inserted? = %s\n", n, GET_RET(ret));
        // 印出這一輪輸入後的陣列
        for (i = 0; i < cnt; ++i)
            printf("%d, ", arr[i]);
        putchar('\n');
    }
    return 0;
}