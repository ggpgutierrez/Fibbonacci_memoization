#include <stdio.h>
#include <stdlib.h>

#define N 100

long long int cache[N] = {};


long long int fibo_memo(int n){
  long long int x;
  if (n == 0 || n == 1) {
    return(1);
  }

  if(cache[n] == 0){
      x = fibo_memo(n-1) + fibo_memo(n-2);
      cache[n] = x;
      return(x);
  }else{
    return cache[n];
  }

}

int main(void)
{
  
  int i;
  for (i = 1; i <= N; i++) {
    printf("%lld ", fibo_memo(i));
  }
  printf("\n");
	return 0;
}