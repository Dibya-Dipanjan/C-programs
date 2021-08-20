#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	int count =0;
	scanf("%d",&n);
	for(int i=5;n/i>=1;i*=5)
	{
	    count += n/i;
	}
	printf("%d",count);
	return 0;
}

