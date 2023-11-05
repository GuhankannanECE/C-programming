// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n,i,j;
   printf("n");
   scanf("%d",&n);
   char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
   for(i=1;i<=n;i++){
       for(j=1;j<=n-i+1;j++){
           printf("%c",a[i-1]);
           
       }
       printf("\n");
       
   }
}
