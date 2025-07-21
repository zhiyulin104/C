# include <stdio.h>

int main() {
	// 讀取一字元
	char ch = getchar();
	if (ch <= 90) {
		ch += 32;
    }
	else {
		ch -= 32;
    }
	putchar(ch);
    return 0;
}