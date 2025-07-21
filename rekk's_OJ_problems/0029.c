# include <stdio.h>

int main() {
	int S;
    scanf("%d", &S);
    if (S < 0 || S > 100) {
    	printf("%s", "X");
    }
	else if (S < 60) {
    	printf("%s", "F");
    }
	else if (S < 70) {
    	printf("%s", "C");
    }
    else if (S < 80) {
    	printf("%s", "B");
    }
    else {
    	printf("%s", "A");
    }
    return 0;
}