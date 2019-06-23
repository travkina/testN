#include <iostream>
using namespace std;

bool isPrime(int n){
	if(n==1) 
		return false;
	for(int d=2; d*d<=n; d++){
		if(n%d == 0) return false;
	}
	return true;
}

bool isPalindrom(int n){
	int num, digit, i = 0, rev = 0;
	if (n > 1 && n<10 && isPrime(n)) return true;
	num = n;
	do{
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
         i ++;
     } while (num != 0);
     if (n == rev && i >= 3 && isPrime(n)) return true;
     else return false;
}
int getPalindrom(int n){
	do{
     	n++;
     }while (isPalindrom(n) == false);
	return n;
}
int main()
{
    cout << "n = " << getPalindrom(5) << endl;
    return 0;
}
