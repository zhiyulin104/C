// int main() {
//     int size; // 宣告一整數型態的變數；但沒有初始化
//     int num = 2; // 宣告一整數型態的變數，並初始化為 2
//     double rate = 0.7; // 宣告一浮點數型態的變數，並初始化為 0.7
//     double value; // 宣告一浮點數型態的變數；但沒有初始化
//     return 0;
// }
// int main() {
//     char ch = 'A'; // 1 個有初始化的 char 變數
//     int num1, num2, num3; // 3 個皆無初始化的 int 變數
//     int len = 5, count = 34, ret; // 3 個 int，前 2 個有初始化
//     double sz, area = 106.5; // 2 個 double，後面那個有初始化
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int num1; // 需先宣告一個變數
//     scanf("%d", &num1); // 必須寫 &num1 !
//     printf("%d\n", num1);
//     return 0;
// }
# include <stdio.h>

int main() {
	int a;   // 宣告變數
    int b;   // 宣告變數
    int c;   // 宣告變數
    int d;   // 宣告變數
	int e;   // 宣告變數
    int f;   // 宣告變數
    int g;   // 宣告變數  
    scanf("%d", &a);    // scanf() 如同 Python 裡的 input()
    scanf("%d", &b);    // scanf() 如同 Python 裡的 input()
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;
	printf("%d/n", c);
    printf("%d/n", d);
    printf("%d/n", e);
    printf("%d/n", f);
    printf("%d/n", g);
    return 0;
}