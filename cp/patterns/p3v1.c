#include<stdio.h>

int main(){
        int n;
        int h=n;
        scanf("%d", &n);
        for(int i=0;i<n;i++){
                for(int k=0;k<(2*n-1);k++){
                        if(k<n-i)
                                printf("%c",65+k);
                        else if(i!=0 && k<n+i-1){
                        printf(" ");
                        }
                        else if(i>0 && k>=n+i-1){
                        printf("%c",63+h);
                                h--;}
                        else if (i==0 && k==n+2){
                                for(int o=n-1;o!=0;o--)
                                        printf("%c",64+o);
                        }
                }
                h = n-i;
                printf("\n");
        }
}
