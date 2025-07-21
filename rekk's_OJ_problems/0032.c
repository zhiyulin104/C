# include <stdio.h>
# include <stdlib.h> // 為了使用 qsort
# include <stdbool.h> // 為了使用 bool 類型
# define MAXN 1000 // 陣列最大長度

// 宣告 cmp 函式(比較兩個陣列元素), 語法: 型別 函式名稱(參數1, 參數2, ......);
int cmp(void const *, void const *);

// 主執行代碼
int main() {
    int n;
    scanf("%d", &n);
    int arr[MAXN];
    int i;
    // 輸入 n 個整數到 arr 陣列
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    /*Step 1. 去重*/
    int j, k;
    int dedupArr[MAXN]; // 用於儲存已有的數字 "種類"   
    int cnt = 0; //  記錄 dedupArr 中的元素個數
    int num;
    bool found;
    // 循環檢查
    for (i = 0; i < n; ++i) {
        num = arr[i];
        found = false; 
        // 檢查 num 是否存在於 dedupArr
        for (j = 0; j < cnt; ++j) {
            if (dedupArr[j] == num) {
                // 如果存在
                found = true;
                break; // 跳出內部循環
            }
        }
        // 如果不存在於 dedupArr
        if (!found) {
            // 將 num 添加到 dedupArr
            dedupArr[cnt] = num;
            cnt++;
        }
    }

    /*Step 2. 排序*/
    // 使用 qsort 函式對 arr 陣列進行排序
    qsort(arr, n, sizeof(int), cmp);
    
    // 輸出排序後的陣列
    for (i = 0; i < n; ++i) {
        printf("%d", arr[i]);
    }
    putchar('\n');
    return 0;
}

// 定義 cmp 函式
int cmp(void const *a, void const *b) {
    // 將 void 指標轉換為 int 指標
    int *aPtr = (int *)a;
    int *bPtr = (int *)b;
    // 使用取值運算子取元素值
    int aVal = *aPtr;
    int bVal = *bPtr;
    // 比較兩個整數值
    if (aVal < bVal) {
        // 返(回比較結果
        return -1; // aVal 小於 bVal
    }
    else if (aVal > bVal) {
        // 返回比較結果
        return 1; // aVal 大於 bVal
    }
    else {
        // 返回比較結果
        return 0; // aVal 等於 bVal
    }
    // return *(int *)a - *(int *)b;   →此法也可以
}