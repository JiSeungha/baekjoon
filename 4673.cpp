#include <stdio.h>
#include <stdlib.h> 

int main(){
    int* a= (int*)malloc(sizeof(int) * 10001);
    
    for(int i = 0; i<10000; i++){
        a[i] = 0;
    }

    for(int i = 0; i<10000; i++){
        int x = 0; //i가 만들어 낸 수를 x로 선언
        int tmp = i;
        
        for(; tmp > 9; tmp/=10) //i의 모든 자릿수를 더하기
            x += tmp%10;
        x += tmp;
        
        x += i;
        
        if(x<10000)//x에 해당하는 수를 거른다
            a[x]++;
    }
    for(int i = 0; i < 10000; i++)
        if(a[i] == 0)
            printf("%d\n",i);

    return 0;
}