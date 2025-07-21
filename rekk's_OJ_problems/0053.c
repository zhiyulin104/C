// 載入 <stdio.h> 內建函式
# include <stdio.h>

// 宣告函式, 語法: 型別 函式名稱(參數1, 參數2, ......);
int sumUp(intN);

// 主執行代碼
int main() {
    // 宣告整數變數 intN
	int intN;
	// 輸入 intN 之值
    scanf("%d", &intN);
    printf("%d", sumUp(intN));
}

// 定義 sumUp(intN) 函式
int sumUp(intN) {
    int sum = 0;
	for (int i = 1; i <= intN; ++i) {
		sum += i;
    }
    return sum;
}