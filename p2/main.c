#include <stdio.h>

int main(void){
    int n;
    char answkd;

    scanf("%d", &n);
    scanf("%s", answkd);

    int maxs=0, maxc=0; // 각각 제일 많은 소문자, 숫자 의미 
    int nows=0, nowc=0; // 각각 지금 세고 있는 소문자, 숫자

    for(int i = 0; i < n; i++){
        if (answkd >= 'a' && answkd <= 'z'){
            nows++;
            nowc=0;
            if(nows>maxs){
                maxs=nows;
            }
        }
        else if(answkd >= '0' && answkd<= '9'){
            nows=0;
            nowc++;
            if(nowc>maxc){
                maxc=nowc;
            }
        }
        else{
            nows=0;
            nowc=0;
        }
    }
    printf("%d\n", maxs);
    printf("%d", maxc);
}
