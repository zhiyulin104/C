# include <stdio.h>

int main() {
	int a;
	int b;
	int c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a < 0) {
    	printf("%d ", 0);
    }
	else if (a > 255) {
    	printf("%d ", 255);
    }
    else {
    	printf("%d ", a);
    }
    
	if (b < 0) {
    	printf("%d ", 0);
    }
	else if (b > 255) {
    	printf("%d ", 255);
    }
    else {
    	printf("%d ", b);
    }
    
    if (c < 0) {
    	printf("%d", 0);
    }
	else if (c > 255) {
    	printf("%d", 255);
    }
    else {
    	printf("%d", c);
    }
    
	return 0;
}
