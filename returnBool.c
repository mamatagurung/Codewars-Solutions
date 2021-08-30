// Define a function that takes one integer argument and returns logical value true or false depending on if the integer is a prime.

// Per Wikipedia, a prime number (or a prime) is a natural number greater than 1 that has no positive divisors other than 1 and itself.

// Requirements
// You can assume you will be given an integer input.
// You can not assume that the integer will be only positive. You may be given negative numbers as well (or 0).
// NOTE on performance: There are no fancy optimizations required, but still the most trivial solutions might time out. Numbers go up to 2^31 (or similar, depends on language version). Looping all the way up to n, or n/2, will be too slow.
// Example
// is_prime(1)  /* false */
// is_prime(2)  /* true  */
// is_prime(-1) /* false */
#include<stdio.h>
#include<stdbool.h>
bool primecheck(int x);
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
   bool n =  primecheck(num);
   printf("the value is %d",n);
}
bool primecheck(int num){
  int i;
  if(num<=1){
    return false;
}
  if(num == 2 ){
    return true;
  }
  if(num%2==0)return false;
	for(int i=3;i*i<=num;i+=2)
		if(num%i==0)return false;
	return true;
  

}
