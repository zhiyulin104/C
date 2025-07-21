# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>
# define ACC_L 51 // account
# define PWD_L 2001 // password

typedef struct wifi {
	char acc[ACC_L]; 
    char pwd[PWD_L];
    int amp; // amplitude
}WIFI;

int main() {
	int n;
    scanf("%d", &n);
	
	WIFI *wifiList = (WIFI *)malloc(sizeof(WIFI) * n);
	int i;
	for (i = 0; i < n; ++i) {
		scanf("%s %s %d", wifiList[i].acc, wifiList[i].pwd, &wifiList[i].amp);
    }
	int q;
    scanf("%d", &q);
    char queryAcc[ACC_L];
    int k;
    bool found;
    for (k = 0; k < q; ++k) {
    	scanf("%s", queryAcc);
    	found = false;
    	for (i = 0; i < n; ++i) {
    		if (strcmp(queryAcc, wifiList[i].acc) == 0) {
          		printf("%s %d\n", wifiList[i].pwd, wifiList[i].amp);
            	found = true;
            	break;
            }
        }
        if (!found) {
        	puts("not found");
        }
    }
    free(wifiList); // 釋放動態記憶體
    return 0;
}