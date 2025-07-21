# include <stdio.h>
# include <string.h>
# define MAXI 99

int rFind(char[], char);

int main() {
	char str[MAXI + 1], ch;
	scanf("%s", str);
	scanf(" %c", &ch);
	printf("%d", rFind(str, ch));
	return 0;
}

int rFind(char str[], char ch) {
	int i = strlen(str) - 1;
	for (i; i >= 0; --i) {
		char a = str[i];
    	if (a == ch) {
        	break;
        }
    }
    return i;
}