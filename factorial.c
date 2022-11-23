#include <stdio.h>
int factorialIterative(int n){
    int val = 1;
    for (int i = n; i > 1; i--)
    {
        val*=i;
    }
    return val;
    
}
int main(){
    int n ;
    printf("enter the number which factorial u want\n");
scanf("%d",&n);
int factorial = factorialIterative(n);
printf("the value of factorial is %d",factorial);
return 0;
}