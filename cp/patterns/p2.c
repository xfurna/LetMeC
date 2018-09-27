/* pattern print for a given entry, let it be 5 then-
      *****
     *   *
    *   *
   *   *
  *****
  */
#include <stdio.h>
void p2(int n, int f, int g, int c, int flag){
	if (f*g != 0 || c == 0){
		printf(" ");
		c++;
		if (c == n - 1 && flag == 1)
			g = 0;
		p2(n, f-1, g, c);
	}
	if (f != 0 && g == 0 && (c == -1 || c == n){
			printf("*");
			if (c != n)
				p2(n, n-2, 1, c);
			else
				printf("\n");

	}
	return;
}

int main(){
	int i = -1, n;
	scanf("%d", &n);
x:
	i++;
	if (i != n)
		p2(n, n-i, 1, -1);
	else
		goto x;
}
