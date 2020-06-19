//Ques: Find different number in array in which we have even combinations of numbers excpet one.
//Ex: 1,1,2,2,5 
//Output: 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int ar[n];
    
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }

    //Xor of all numbers and output in last element of array
    for(int i=1;i<n;i++){
      ar[i] ^= ar[i-1];
    }

    if(ar[n-1]!=0){
      cout << ar[n-1] << endl;
    }else{
      cout << "All numbers have combinations." << endl;
    }
}
