#include<stdio.h>
int main(){
    int m,n,i,sum=0;
    printf("hello put your number to know you ");
    scanf("%d",&m);
    
    printf("please the other number%d",n);
    scanf("%d",&n);
    
   if(m<n) {
              i=m;
              while (i<=n){
                            sum=sum+i;
                            i++;
                          }
              printf("so your sum is %d",sum);
           } 
            
     else if (m>n){
                   i=n;
                   while (i<=m){
                                 sum=sum+i;
                                 i++;
                               }
                   printf("so your sum is %d",sum);
                 }     
    return 0;
}