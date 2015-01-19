// What is the largest prime factor of the number 600851475143 ?
#include <stdio.h>
int main(void)
{
unsigned long long n = 600851475143;
unsigned long long i;
for (i = 2; i < n; i++) {
while (n % i == 0) {
n /= i;
}
}
printf("%llu\n", n);
return 0;
}
