# include <stdio.h>
# include <string.h>
# define MAXI 150
int main() {
    int value = 0;
    char a[MAXI + 1];
    fgets(a, MAXI + 1, stdin);
	for (int i = 0; i < strlen(a); ++i) {
		char ch_value = a[i];
		if (ch_value == 32) {
            // space
			value += 32; 
        }
		else if (ch_value <= 57) {
            // 0 ~ 9
            value += ch_value - 48;
        }
        else if (ch_value <= 90) {
            // A ~ Z
			value += ch_value - 65;
        }
    	else if (ch_value <= 122) {
            // a ~ z
    		value += ch_value - 97;
        }
    }
	printf("%d", value);
    return 0;
}