#include<stdio.h>
#include<conio.h>

int main(){
    int n=10,k=5;
    int num;
    scanf("%d",&num);
    if(k>=1 && k<=5){
        printf("NUMBER OF CANDIES SOLD :%d\n",num);
        printf("NUMBER OF CANDIES AVAILABLE :%d",n-num);
    }
    else{
        printf("INVAILD INPUT\n");
        printf("NUMBER OF CANDIES AVAILABLE :%d",n);
        
    }
}
