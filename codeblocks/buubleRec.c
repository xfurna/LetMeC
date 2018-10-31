#include <stdio.h>
void b(int a[], int s, int i, int j){
  int t;
    if(i<s){
      if(j<s-i-1){
        if(a[j]<a[j+1]){
          t=a[j];
          a[j]=a[j+1];
          a[j+1]=t;
        }
        b(a,s,i,j+1);
      }
      b(a,s,i+1,0);
    }
}
int main(){
  int i, s;
  printf("enter the size\n");
  scanf("%d",&s);
  printf("enter the elements\n");
  for(i=0;i<s;i++){
    scanf("%d",&a[i]);
  }
  b(a,s,0,0);
  for(i=0;i<s;i++){
    printf("%d",a[i]);
  }
}
