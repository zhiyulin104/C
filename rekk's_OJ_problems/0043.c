# include <stdio.h>

int main() {
    int str1;
    int str2;
    // 分別使用 scanf 及 gets 讀取兩個字串
    scanf("%d %d", &str1, &str2);
    getchar();
    int c;
    // 分別輸出
    char b;
    scanf("%c", &b);
    if (b == '+') { 
    	c = str1 + str2;
    }
    else if (b == '-') {
    	c = str1 - str2;
    }
    else if (b == '*') {
    	c = str1 * str2;
    }
    else if (b == '/') {
    	c = str1 / str2;
    }
    printf("%d", c);
    return 0;
}