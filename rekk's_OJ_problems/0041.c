# include <stdio.h>

int main() {
	int a;
    int b;
    int c;
	scanf("%d", &a);
    while (a > 0) {
  		scanf("%d", &b);
        c = b * b;
        printf("%d\n", c);
        a--;
    }
    return 0;
}