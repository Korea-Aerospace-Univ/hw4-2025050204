#include <stdio.h>
int main(void){
    int a=5, b, i=0; 
    do{
        scanf("%d", &b);
        i++;

        if(a<b){
            printf("%d>?\n", b);
        }
        else if(a>b){
            printf("%d<?\n", b);
        }
        else{
            printf("%d==?\n", b);
            printf("%d", i);
        }
    } while(a!=b);
    
    return 0;
}
