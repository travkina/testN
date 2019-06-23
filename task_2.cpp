#include <iostream>
#include <ctime>
using namespace std;


int getSumm(int coins[], int sizeArr){

    int minElmt = 0, sumAll = 0, result = 0;
    
    minElmt = coins[0];
    
    for(int i = 1; i < sizeArr; i++){
        if (minElmt > coins[i]) minElmt = coins[i]; 
    }
    
    cout << "minElmt = " << minElmt << endl;
    
    if (minElmt == 1){
        for(int i = 0; i < sizeArr; i++){
            sumAll += coins[i];
        }
        result = sumAll+1;
    }else result = minElmt-1;
    
    cout << "result =  " << result << endl;
    
    return result; 
}

int main()
{
	srand(time(0));
	
	int n;
	n = rand() % 10 + 2;
	cout << "n = " << n << endl;
    int *coins = new int(n);
    
    for(int i = 0 ; i < n; i++){
    	coins[i] = rand() % 9 + 1;
    	cout << coins[i] << ", ";
    }
    cout << "\n";
   
   cout << "summ = " <<getSumm(coins, n) << endl;
   delete [] coins;
   return 0;
}
