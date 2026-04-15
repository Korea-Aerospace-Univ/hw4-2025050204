#include <stdio.h>

int main() {
    int n, e=0, c=0; 
    char answkd = [100]; 
    int legende=0, legendc=0; 

    
    scanf("%d", &n);
    scanf("%s",&answkd);

    
    for (int i = 0; i < n; i++) {
        char a = answkd[i]; 

       
        if (a>= 'a' && a <= 'z') { //영어 소문자라면 e하나 올리고 c는 0으로 초기화
            e++;      
            c = 0;  
            if(e > legende){
                legende=e;
            }
        }
        else if (a>= '0' && a <= '9') { //숫자라면 e초기화, c 하나 올리기
            c++;     
            e = 0;   
            if(c>legendc){
                legendc=c;
            }

            
        }
        else { // 둘 다 아니면
            e= 0;   //연속성 끊기니까 둘 다 0으로 초기화 시켜줌
            c= 0;
        }
    }

    printf("%d\n",legende);
    printf("%d\n",legendc); // 제일 큰 연속 횟수 만들어서 넣기...

    return 0;
}
