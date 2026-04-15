#include <stdio.h>

int main(void) {
    int n;
    char c; 

    scanf("%d", &n);

    int maxs = 0, maxc = 0;
    int nows = 0, nowc = 0;

    for (int i = 0; i < n; i++) {
        scanf(" %c", &c); 
        if (c >= 'a' && c <= 'z') {
            nows++;
            nowc = 0;
            if (nows > maxs) maxs = nows;
        } 
        else if (c >= '0' && c <= '9') {
            nowc++;
            nows = 0;
            if (nowc > maxc) maxc = nowc;
        } 
        else {
            nows = 0;
            nowc = 0;
        }
    }

    printf("%d\n", maxs);
    printf("%d\n", maxc);

    return 0;
}
