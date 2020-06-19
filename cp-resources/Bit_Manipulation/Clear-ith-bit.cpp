//Ques: Clear ith bit means if the i-th bit is 1 then it turns into 0.

//C++ Code

#include <bits/stdc++.h>
using namespace std;

int main() {
   
	int n; 
	cin >> n;
  
	int res = n&(~(1<<1));
	
	cout << res << endl;

}
