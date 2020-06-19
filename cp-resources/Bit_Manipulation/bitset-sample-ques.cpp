#include<bits/stdc++.h>

using namespace std;

int main() {

    //Ques 1: Count no. of set bits in an interval:
    
    bitset<10> a2(string("1001010101"));
    int l = 2, r = 8;
    int n = a2.size();
    // Left shift initial (l - 1) bits
    a2 <<=  l - 1;
    cout << a2 << '\n';

    // Bring all the bits back to initial position
    a2 >>= l - 1;
    cout << a2 << '\n';

    // Remove the bits after the right boundary (say r)
    a2 >>= n - r;
    cout << a2 << '\n';

    cout << a2.count() << '\n';
    cout << '\n' << '\n';


    //Ques 2: Count no. of common elements between two array:
    int arr[3] = {1, 2, 3};
    int brr[3] = {3, 4, 1};

    bitset<10> a3, b3;

    for (int i = 0; i < 3; i++) {
        a3.set(arr[i]);
    }

    for (int i = 0; i < 3; i++) {
        b3.set(brr[i]);
    }

    bitset<10> res = a3 & b3;

    cout << res.count() << '\n';

    return 0;
}
