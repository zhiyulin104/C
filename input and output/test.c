# include <stdio.h>
# include <string.h>
# define MAXI 100

int main() {
	int a;
	scanf("%d", &a);
    char ch[MAXI+1];
	for (int i = 0; i < a; ++i) {
		for (int j = 0; j < strlen(ch); ++j) {
			fgets(ch, MAXI+1, stdin);
			if (i != a - 1) {
                for (int t = 0; t < i + 1; ++t) {
                    printf("%s", "*");
                }
                printf("%s", ch);
                for (int t = 0; t < i + 1; ++t) {
                    printf("%s", "*");
                }
                puts("\n");
			}	
  			else {
				for (int t = 0; t < i + 1; ++t) {
                    printf("%s", "*");
                }
                printf("%s", ch);
                for (int t = 0; t < i + 1; ++t) {
                    printf("%s", "*");
                }
            }
        }
    }
	return 0;
}