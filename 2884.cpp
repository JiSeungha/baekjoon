#include <stdio.h>

int main(){
    int h, m;
    scanf("%d%d",&h,&m);
    if(m<45){
        m += 60;
        h -= 1;
    }
    if(h<0) h+= 24;
    printf("%d %d",h,m-45);
    return 0;
}
