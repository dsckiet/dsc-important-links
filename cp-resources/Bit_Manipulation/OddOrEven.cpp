//Ques: Find the number if that is even or odd using bitwise operators.

//C++ Code

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    if((n&1)==1){
      cout << "Odd" << endl;
    }else{
      cout << "Even" << endl;
    }

}
