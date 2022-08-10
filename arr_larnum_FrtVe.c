#include<stdio.h>
#include<limits.h>

int main(){
    int n,c=0,a,m=INT_MIN;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        if(a>m){
            m=a;
            c++;
        }
        
    }
    printf("%d",c);
    return 0;
}
