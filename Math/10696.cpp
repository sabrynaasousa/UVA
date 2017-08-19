#include <bits/stdc++.h>

using namespace std;

long long int f91(long long int n){
	if(n <= 100)
		return f91(f91(n + 11));
	else
		return (n - 10);
}

int main(){
	long long int n;

	while(cin >> n and n != 0){
		cout << "f91(" << n << ") = " << f91(n) << endl; 
	}	
	return 0;
}
