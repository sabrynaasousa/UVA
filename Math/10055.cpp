#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n1, n2;

	while(cin >> n1 >> n2){
		if(n1 >= n2)
			cout << n1 - n2 << endl;
		else
			cout << n2 - n1 << endl;
	}
	return 0;
}
