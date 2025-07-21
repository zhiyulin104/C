# include <stdio.h>

int main() {
    int line_times;
    int star_times;
    int space_times = 0;
    scanf("%d", &star_times);
    line_times = star_times;
    for (line_times; line_times > 0; --line_times) {
        for (int i = 0; i < space_times; ++i) {
            printf("%s", " ");
        }
        int k = 1;
        for (k; k <= line_times; ++k) {
            printf("%s", "*");
        }
        if (line_times != 1) {
            printf("\n");
        }
        --star_times;
        ++space_times;
    }
}