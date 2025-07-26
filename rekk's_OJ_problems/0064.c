// """凱薩密碼(難)"""


// 載入內建函式
# include <stdio.h> // 輸入輸出
# define MAX_L 600 // 限制最大長度


// 宣告 "加密機器"
void cipherChanger(char[], long long int); 

// 定義
void cipherChanger(char str[], long long int k) {
    // 當 fgets(str, MAX_L, stdin) 有值時:
    while (fgets(str, MAX_L, stdin)) {
        // 一個一個字讀取
        for (int i = 0; str[i]; ++i) {
            // w 代表 ascil code
            char w = str[i];
            // 當 w 為大寫字母(65 ~ 90)
            if (w > 64 && w < 91) {
                w -= 65;
                w += k;
                w %= 26;
                w += 65;
            }
            
            // 當 w 為小寫字母(97 ~ 122)
            else if (w > 96 && w < 123) {
                w -= 97;
                w += k;
                w %= 26;
                w += 97;
            }
            // putchar(w);
            printf("%c", w);
        }
    } 
}

// 主程式代碼
int main() {
	long long int k; // k 有可能超出 int 範圍
	scanf("%lld", &k);
    k %= 26;
    k += 26; // 解決負數問題
    getchar(); // 解決換行問題
    char str[MAX_L]; // 當行的字串
    cipherChanger(str, k); // 函式
}



// 另解(使用函式分離邏輯，效率更高(1~30ms))

#include <stdio.h>
#define MAXL 600

char decrypt_password(long long int, char);

char decrypt_password(long long int k, char ch){
   
    // 大寫字母 A-Z (ASCII 65~90)
    if (ch >= 'A' && ch <= 'Z') {
        ch = 'A' + (ch - 'A' + k) % 26;
    }
   
    // 小寫字母 a-z (ASCII 97~122)
    if (ch >= 'a' && ch <= 'z') {
        ch ='a' + (ch - 'a' + k) % 26;
    }
  
  	return ch;
}

int main() {
    long long int k;
    char line[MAXL];

    // 讀取 k 值，字母向後移動 k 個位置
    scanf("%lld", &k);
    getchar();  // 吃掉第一行的換行

    // 處理偏移量
    k = k % 26 + 26;
   
    // 不斷讀取每一行直到 EOF
    while (fgets(line, MAXL, stdin)) {
        // 使用迴圈輸入多個字元直到 EOF
        for (int i = 0; line[i]; ++i) {
            // 解密函式
            char pwd = decrypt_password(k, line[i]);
           
            putchar(pwd); // 輸出轉換後的字元
        }
    }

    return 0;
}