#include<stdio.h>
#include<conio.h>

int main(){
    int n,sum=0,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                arr[i]=arr[i]+1;
            }
            if(arr[j]<0)
            count=1;
        }
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    if(count ==1){
        printf("Wrong Input");
    }
    else{
        printf("%d",sum);
    }
   // return 0;
}
