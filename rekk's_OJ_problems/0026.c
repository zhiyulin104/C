# include <stdio.h>

int main() {
    int duration_start;
    int duration_end;
    int quotient;
    scanf("%d", &duration_start);
    scanf("%d", &duration_end);
    scanf("%d", &quotient);
    int many = (duration_end) / quotient - (duration_start - 1) / quotient;
    printf("%d", many);
    return 0;
}