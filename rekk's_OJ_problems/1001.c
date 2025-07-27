# include <stdio.h>
# include <stdbool.h>

int main() {
	int length;
	scanf("%d", &length);
	int prior_height = 0;
	int height;
	bool what = true;
	for (int i = 0; i < length; ++i) {
		scanf("%d", &height);
		if (height < prior_height) {
			what = false;
        }
		prior_height = height;
    }
    if (what) {
		printf("%s", "YES");
    }
	else {
		printf("%s", "NO");
    }
	return 0;
}