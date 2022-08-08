#include <stdio.h>
#include <conio.h>

int main()
{
    int w,v;
    scanf("%d",&w);
    scanf("%d",&v);
    float x =((4*v)-w)/2;
    if((w&1) || w<2 || w<=v){
        printf("INVALID INPUT");
    }
    else{
        printf("TW=%f,FW=%f",x,v-x);
    }
    
    return 0;
}
