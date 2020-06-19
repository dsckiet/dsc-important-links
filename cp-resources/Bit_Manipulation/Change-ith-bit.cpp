//Ques: Change i-th bit of number


//C++ Code

#include <bits/stdc++.h>
using namespace std;

int main() {
   
	int n; 
	cin >> n;
  
	int maskBit = (int)(pow(2,1))^n; // we need to change 2nd bit so taking 1 in power of 2 as 0 based indexing
	
  
	cout << maskBit << endl;

}
