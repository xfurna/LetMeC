/*printing number triangle
 1
 22
 333
 4444
 */

#include <stdio.h>
//#include <process.h>

void p1(int n, int i, int c){
	if(i){
		printf("%d", c);
		p1(n,i-1, c);
	}
	return;
}

int main(){
	int i = 1, n, c = 1;	
	scanf("%d", &n);
x:
	p1(n, i, c);
	i++;
	c = i;
	n--;
	printf("\n");
	if (n)
		goto x;
}
