# include <stdio.h>

int main() {
	float a;
	float b;
	float c;
	float x;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &x);
	if (a + b + c == x) {
		printf("%s", "==");
    }
	else {
		printf("%s", "!=");
    }
	return 0;
}