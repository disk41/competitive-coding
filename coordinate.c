#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    char c ='R';
    int x=0, y=0;
    int dis=10;
    
    while(n){
        switch(c){
            case 'R':
            x=x+dis;
            dis=dis + 10;
            c ='U';
            break;
            
            case 'U':
            y=y+dis;
            dis=dis+ 10;
            c='L';
            break;
            
            case 'L':
            x=x-dis;
            dis=dis + 10;
            c='D';
            break;
            
            case 'D':
            y=y-dis;
            dis=dis - 10;
            c= 'A';
            break;
            
            case 'A':
            x=x+ dis;
            dis=dis - 10;
            c= 'R';
            break;
        }
        n--;
    }
    printf("%d,%d",x,y);
    return 0;
}
