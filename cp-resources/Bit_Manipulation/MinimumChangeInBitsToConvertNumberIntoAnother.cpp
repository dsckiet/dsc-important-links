//Ques: Output the minimum number of bits to change to convert that number into another.
//Ex: a=11, b=15
//Output: 1

//C++ Code

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b;
    cin >> a >> b;
    
    //Xor of two numbers
    a ^= b;

    //how many set bits in xor using in-built function
    int set_bits = __builtin_popcount(a);

    cout << set_bits << endl;

}
