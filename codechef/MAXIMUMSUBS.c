#include <stdio.h>

int main() {
	int t,n;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
	    scanf("%d",&n);
	    printf("%d\n",(n*60)/30);
	}
	return 0;
}

