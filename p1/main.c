#include <stdio.h>
int main(){
    int a, b, i=0;
    scanf("%d", &a);

    do{
        scanf("%d", &a);
        i++;
        
        if(a<b){
            printf("%d>?\n", b);
        }
        else if(a>b){
            printf("%d<?\n", b);
        }
        else{
            printf("%d==?\n", b);
        }
    }while(a!=b);
    printf("%d", i);
    return 0;
}
