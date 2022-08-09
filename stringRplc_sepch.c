#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
    char str [20];
    scanf("%s",str);
    int a=0, b=0;
    int i;
    for(int i=0;i<strlen(str);i++){
        if (i=='#'){
            a++;
        }
        else if(i=='*'){
            b++;
        }
    printf("%d",a-b);
    }
   
    return 0;
}
