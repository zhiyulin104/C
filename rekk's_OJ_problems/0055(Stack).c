// 載入內建標準函式
# include <stdio.h>  // 輸入輸出
# include <string.h> // 字串函式(strlen、strcmp、strcpy、strcat、strtok、strstr)
# include <stdlib.h> // malloc、free、sizeof、qsort

// 設定 "最大指令數"
# define MAX_SZ 5000

// 宣告 Stack 功能函式
void push(int *, int *, int); 	// push
void pop(int *, int *); 		// pop

int main() {
    int *stack = malloc(sizeof(int) * MAX_SZ); // 設動態的整數陣列
    int top = 0; 	// 初始化 Stack 裡最頂層
    int num; 		// 代表此層的數字
    char cmd[5]; 	// 指令(現在的)
    while (scanf("%s", cmd)) {
        // push
        if (!strcmp(cmd, "push")) {
            scanf("%d", &num);
            push(stack, &top, num);
        }
        // pop
        else if (!strcmp(cmd, "pop")) {
            pop(stack, &top);
        }
        // q
        else {
            printf("end");
            break;
        }
    }

    free(stack);
    return 0;
}

// 定義
void push(int *stack, int *top, int num) {
    stack[*top] = num;
    ++(*top);
}

void pop(int *stack, int *top) {
    if (*top == 0)
        puts("empty");
    else {
        --(*top);
        int num = stack[*top];
        printf("%d\n", num);
    }
}