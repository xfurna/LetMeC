/* a complex algorithm of swapping the values of two numbers */

#include <stdio.h>
void swap(){
	int a, b, s=0, l, m;
	scanf("%d % d", &a, &b);
	if( a > b ){
		l = a;
		m = b;
	}
	else{
		l = b;
		m = a;
	}
	for(int i = 0 ;i <= l ; i++){
		if(i == m){
			m++;
			s++;
		}
	}
	l-= s;
	l++;
	m--;
	if(a > b){
		a = l;
		b = m;
	}
	else{
		a = m;
		b = l;
	}
	printf("%d %d", a, b);
	return 0; 
}


int main(){
	swap();
	return 0;
}
