#include<stdio.h>
#include<conio.h>

int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int k=i+1;k<n;k++){
                if(arr[k]==1)
                    count++;
            }
        }
    }
    printf("%d",count);
}