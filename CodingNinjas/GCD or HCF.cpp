// CN: https://www.codingninjas.com/studio/problems/hcf-and-lcm_840448

// Normal GCD
// int calcGCD(int n, int m){
//     int gcd=1;
//     for(int i=2; i<=min(n,m); i++){
//         if(n%i==0 && m%i==0)
//             gcd=i;
//     }
//     return gcd;
// }

// Eucledian Method: gcd(a,b) = gcd(a-b,b), a>b -> Keep applying recursively
// or gcd(a,b) = gcd(a%b, b), no longer continous application
int calcGCD(int n, int m){
    if(n==0)
        return m;
    if(m==0)
        return n;

    if(n>=m)
        n = n%m;
    else
        m = m%n;
    calcGCD(n, m);
}
