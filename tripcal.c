#include <stdio.h>

int main(){
	int r1,n,r2,x;
	int temp,hr;
	scanf("%d %d %d %d",&r1,&n,&r2,&x);
	hr = (x+59)/60;
	if(hr > n){
	    temp=n*r1+(hr-n)*r2;
	}
	else{
	    temp = n*r1;
	}
	printf("%d",temp);
	return 0;
}

