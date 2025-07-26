// (去重與排序，須注意效能)


// 此法會超時(線性搜尋)

#include <stdio.h>
#include <stdlib.h>
#define MAX_N 1000000

int checkExist(int *, int, int);

int cmp(void const *, void const *);

int main() {
    int *arr = malloc(sizeof(int) * MAX_N);
    int n, i, num, exists, cnt = 0;

    // 讀取資料
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &num);
        exists = checkExist(arr, cnt, num);
        if (exists == 0) {
            arr[cnt] = num;
            ++cnt;
        }
    }
    
    // 執行排序
    qsort(arr, cnt, sizeof(int), cmp);
    
    for (i = 0; i < cnt; ++i)
        printf("%d ", arr[i]);
    
    free(arr);
    return 0;
}

int checkExist(int *arr, int cnt, int num) {
    int i;
    for (i = 0; i < cnt; ++i) {
        if (arr[i] == num)
            return 1;
    }
    return 0;
}

int cmp(void const *a, void const *b) {
    int *ia = (int *)a;
    int *ib = (int *)b;
    return *ia - *ib;
}

// 正解
#include <stdio.h>
#include <stdlib.h>
#define MAX_N 1000000

typedef struct node {
    int num;
    struct node *left;
    struct node *right;
}Node;

void insert(Node **, int);
int search(Node *, int);
void visit(Node *, int *, int *);

int main() {
    int n;
    scanf("%d", &n);

    Node *root = malloc(sizeof(Node));
    root = NULL;
    int num;
    for (int k = 0; k < n; ++k) {
        scanf("%d", &num);
        if (!search(root, num))
            insert(&root, num);
    }

    int *res = malloc(sizeof(int) * MAX_N);
    int res_cnt = 0;
    visit(root, res, &res_cnt);
    for (int k = 0; k < res_cnt; ++k)
        printf("%d%s", res[k], k == res_cnt - 1 ? "" : " ");
    free(res);
    return 0;
}

void insert(Node **root, int n) {
    if (!(*root)) {
        (*root) = malloc(sizeof(Node));
        (*root)->num = n;
        (*root)->left = (*root)->right = NULL;
    }
    else {
        if (n < (*root)->num)
            insert(&((*root)->left), n);
        else
            insert(&((*root)->right), n);
    }
}

int search(Node *root, int n) {
    if (!root)
        return 0;
    else if (root->num == n)
        return 1;
    else {
        if (n < root->num)
            return search(root->left, n);
        else
            return search(root->right, n);
    }
}

void visit(Node *root, int *list, int *cnt) {
    if (!root)
        return;
    else {
        visit(root->left, list, cnt);
        list[*cnt] = root->num;
        ++(*cnt);
        visit(root->right, list, cnt);
    }
}