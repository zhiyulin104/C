# include <stdio.h>

int main() {
    double num;
    double total;
    double average;
    int how_long;
    while (scanf("%lf", &num) != EOF) {
        total += num;
        ++how_long;
    }
    average = total / how_long;
    printf("%.3lf\n", total);
    printf("%.3lf\n", average);
    return 0;
}