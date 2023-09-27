// CN: https://www.codingninjas.com/studio/problems/count-digits_8416387

int countDigits(int n){
	int res=0;
	int a=n;
	while(a){
		if(a%10!=0 && n%(a%10)==0)
			res++;
		a/=10;
	}
	return res;
}
