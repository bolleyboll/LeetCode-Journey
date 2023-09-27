# CN: https://www.codingninjas.com/studio/problems/sum-of-all-divisors_8360720

#include <math.h>
int sumOfAllDivisors(int n){
	int res=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=sqrt(i); j++){
			if(i%j == 0){
				res+=j;
				if((i/j) != j)
					res+=(i/j);
			}
		}
	}
    return res;
}
