#include <stdio.h>
#include <conio.h>

int main(){
    int ne, ni;
    float inn_c=18,ext_c=12,cost=0,temp;
    scanf("%d %d",&ne,&ni);
    if(ni<0 || ne<0){
        printf("INVALID INPUT");
    }
    else if(ni==0 && ne==0){
        printf("Total estimated Cost : 0.0");
    }
    else{
        for(int i=0;i<ni;i++){
            scanf("%f",&temp);
            cost+=inn_c*temp;
        }
        for(int i=0;i<ne;i++){
            scanf("%f",&temp);
            cost+=ext_c*temp;
        }
        printf("Total estimated Cost : %lf",cost);
        
    }
    return 0;
    
}
