// CN: https://www.codingninjas.com/studio/problems/check-prime_624934

#include <math.h>
bool isPrime(int n)
{
	if(n==1)
		return false;

	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0)
			return false;
	}
	
	return true;
}
