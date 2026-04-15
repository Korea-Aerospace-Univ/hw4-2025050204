#include <stdio.h>
int main(void){
    int a=5, b, i=1; // a는 5(정답), b는 입력받을 수, i는 횟수
    do{
        scanf("%d", &b);
        i++;

        if(a<b){
            printf("%d > ?\n", b);
        }
        else if(a>b){
            printf("%d < ?\n", b);
        }
        else{
            printf("%d == ?\n", b);
            printf("%d", i);
        }
    } while(a!=b);
    
    return 0;
}
