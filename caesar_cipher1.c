#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int cascip(char s,int k){
    char result = "";
    for(int i=0; i=strlen(s); i++){
        if(isupper(str(i))){
            result += char(int(s[i] + k-65)%26 +65);
        }
        else
            result += char(int(s[i] + k-97)%26 +97);
    }
    return result;
}
int main(){
    int k;
    char s[20];
    printf("Enter your PlainText:");
    scanf("%s",s);
    printf("Enter the Key");
    scanf("%d",&k);
    int cascip(char s, int k);
    printf("The encrypted Text is:");
    return 0;
    
}
