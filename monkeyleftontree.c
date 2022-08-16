#include<stdio.h>

int main(){
    int n,k,j,m,p;
    scanf("%d %d %d %d %d",&n,&k,&j,&m,&p);
    float rembanana=0.0, rempeanut=0.0;
    if(n<0 || k<0 ||j<0 ||m<0 ||p<0){
        printf("INVALID INPUT");
    }
    else{
        if(k>0){
            rembanana=m-k;
        }
        if(j<0){
            rempeanut=m-j;
        }
        n=n-rembanana-rempeanut;
        printf("Number of Monkeys left on the Tree:%d", n);
    }
    return 0;
}
