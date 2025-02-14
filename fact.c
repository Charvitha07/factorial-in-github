#include<stdio.h>
int fac(int n){
if (n==0 || n==1)
return 1;
else 
return n*fac(n-1);}
int main (){
int num ;
printf("enter a number:");
scanf("%d",&num);
printf("factorial of %d is %d",num,fac(num));
return 0;
}
