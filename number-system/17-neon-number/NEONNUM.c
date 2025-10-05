#include <stdio.h>

int main() {
	// your code goes here
	int t;
	int m,n,sum,r;
	scanf("%d",&t);
	while (t--) {
	    scanf("%d", &n);
	    m=n*n;
	    sum=0;
	
	    while(m ){
	        r=m%10;
	        sum+=r;
	        m=m/10;
	    }
	
	    if(sum==n) {
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	    
	}
    return 0;
}

