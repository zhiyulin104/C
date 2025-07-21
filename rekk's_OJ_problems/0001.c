#include <stdio.h>

int main() {
    char str[71];  // 最多 70 字元，加上 '\0' 結尾

    scanf("%70s", str);  // 讀取字串（不包含空白）
    printf("[%s]\n", str);  // 用中括號包住後輸出

    return 0;
}