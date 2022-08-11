#include<stdio.h>
#include<conio.h>

int main(){
    int n,sum=0,max;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    max=sum;
    for(int i=0;i<n;i++){
        sum=sum+a[i]-b[i];
        if(max<sum){
            max=sum;
        }
    }
    printf("%d",max);
}
