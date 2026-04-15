#include <stdio.h>
int main(void){
    int a, b, i=1; 
    scanf("%d", &a);
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
