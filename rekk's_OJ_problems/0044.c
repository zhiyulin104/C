# include <stdio.h>
# define N 1000
int main() {
	// n 代表總共有 n 個數
    int n;
	scanf("%d", &n);
	int arr[N];
    int i;
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    for (i = n - 1; i >= 0; --i) {
        printf("%d", arr[i]);
    	if (i > 0)
            putchar(' ');
    }
    return 0;
}
