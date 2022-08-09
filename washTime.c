#include<stdio.h>

int main(){
    int w;
    scanf("%d",&w);
    if(w==0){
        printf("Time Estimated : 0 minutes");
    }
    else if(w>0 && w<=2000){
        printf("Time Estimated : 25 minutes");
    }
    else if(w>=2001 && w<=4000){
        printf("Time Estimated :35 minutes");
    }
    else if(w>=4001 && w<=7000){
        printf("Time Estimated : 45 minutes");
    }
    else{
        printf("INVALID INPUT");
    }
    return 0;
}
  
