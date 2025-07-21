# include <stdio.h>

int main() {
	int n;
    int a;
	while (scanf("%d", &n) != EOF) {
        a = n * n;
		printf("%d\n", a);
    }
	return 0;
}