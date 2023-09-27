// CN: https://www.codingninjas.com/studio/problems/check-armstrong_589

#include <math.h>
bool checkArmstrong(int n){
	int a=n, arm=0, d=to_string(n).size();
	while(n){
		arm = arm + (int)pow(n%10,d);
		n/=10;
	}
	if(a == arm)
		return true;
	return false;
}
