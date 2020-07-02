#include <stdio.h>

int main(){
    int T, a, b;
    int prize = 0;
    scanf("%d",&T);
    for(int trial = 0; trial < T; trial++){
        prize = 0;
        scanf("%d %d",&a,&b);
        if(a!=0){
            if(a==1)
                prize += 500;
            else if(a<4)
                prize += 300;
            else if(a<7)
                prize += 200;
            else if(a<11)
                prize += 50;
            else if(a<16)
                prize += 30;
            else if(a<22)
                prize += 10;
        }
        if(b!=0){   
            if(b == 1)
                prize += 512;
            else if(b<4)
                prize += 256;
            else if(b<8)
                prize += 128;
            else if(b<16)
                prize += 64;
            else if(b<32)
                prize += 32;
        }
        printf("%d\n",prize*10000);
    }
    return 0;
}