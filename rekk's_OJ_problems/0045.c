# include <stdio.h>
# define MAXN 1000

int main() {
	int n;
	scanf("%d", &n);
	
	int scoreArr[MAXN];
	int i;
    for (i = 0; i < n; ++i) {
    	scanf("%d", &scoreArr[i]);
    }
	int passLine;
	scanf("%d", &passLine);
    int allPassed = 1;
    for (i = 0; i < n; ++i) {
        if (scoreArr[i] < passLine) {
            allPassed = 0;
            printf("%d: %d\n", i, scoreArr[i]);
        }
    }
    if (allPassed) {
		printf("%s", "All passed!");      
    }
	return 0;
}