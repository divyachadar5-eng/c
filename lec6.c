//Que. write a code for prime number.
#include <stdio.h>
int main(){
    int n=13;
    int isprime=1;
    if(n<=1)
    {
        printf("prime no nhi hai");
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    if (isprime)
    {
        printf("prime no haii");
    }
    else
    {
        printf("prime no. nhi haii");
    }
      return 0; 
}