# include <stdio.h>

int main() {
	long long int a;
	scanf("%lld", &a);
    while (a != 0) {
		a *= 2;
		a /= 3;
    	printf("%lld\n", a);
    }
	return 0;
}