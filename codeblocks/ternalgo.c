/*task is as simple as finding second largest value among three entered values. Infact, that only is the good task! */

#include <stdio.h>

int ternalgo(){
	printf("enter the values\n");
	int a, b, c, l;
	scanf("%d %d %d", &a, &b, &c);
	l = a>b ? a>c ? b>c ? b:c : a : b>c ? a>c ? a:c : b;
	return l;
}

int main(){
	printf("second largest is %d", ternalgo());
	return 0;
}

