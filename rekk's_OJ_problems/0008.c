# include <stdio.h>

int main() {
    int length;
    scanf("%d", &length);
    for (int i = 1; i <= length; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%s", "*");
        }
        if (i != length) {
            printf("\n");
        }
    }
    return 0;
}