# include <stdio.h>

int main() {
	int a;   // 宣告變數
    int b;   // 宣告變數
    int c;   // 宣告變數
    int d;   // 宣告變數
	int e;   // 宣告變數
    int f;   // 宣告變數
    int g;   // 宣告變數  
    scanf("%4d", &a);    // scanf() 如同 Python 裡的 input()
    scanf("%4d", &b);    // scanf() 如同 Python 裡的 input()
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;
	printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    printf("%d\n", g);
    return 0;
}