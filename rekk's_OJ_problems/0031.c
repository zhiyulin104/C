# include <stdio.h>
# include <string.h>
# define MAXI 200

int main() {
	char str[MAXI + 1];
    scanf("%s", str);
	// 找出每個字元的加密文字
	for (int i = 0; i < strlen(str); ++i) {
        char ch = str[i];
		if (ch % 2 == 0) {
			ch += 17;
			printf("%c", ch);
        }
        else if (ch % 2 == 1){
			ch += 49;
        	printf("%c", ch);
        }
    }
    return 0;
}
