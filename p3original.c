#include <stdio.h>
#include <math.h>
int input_number()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;
  }
int is_prime(int n)
{
  int i;
  if(n==0||n==1)
    return 0;
  if(n==2)
    return 1;
  {
    if ( n%i == 0)
      return 0;
    }
  return 1;
}
void output(int n, int is_prime)
{
  if ( is_prime == 1)
  {
    printf("%d is a prime number\n",n);
    }
  else
  {
    printf("%d is a composite number\n",n);
    }
}
int main()
{
  int n,isp;
  n = input_number();
  isp = is_prime(n);
  output(n,isp);
  return 0;
}
