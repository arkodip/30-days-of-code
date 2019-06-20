#include <stdio.h>
#include <math.h>

int main() {
    
	int sum = 0, tmp = 0, n, flag=0;
	scanf("%d",&n);
	
	if(n<0) {
	    flag =1;
	    n = abs(n);
	}
	
	while(n>9)  {
	    tmp = n%10;
	    sum = sum + tmp;
	    n = n/10;
	}
	
	if(flag == 1)
	    sum=sum-n%10;
	else
	    sum=sum+n%10;
	   
	
	printf("%d\n",sum);
	return 0;
}