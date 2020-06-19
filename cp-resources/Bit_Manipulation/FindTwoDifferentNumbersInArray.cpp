//Ques : Find two different numbers in given array in which we have all numbers have two occurences except two elements.
// Ex: 1,1,2,3  Output - 2,3
// YT Link: youtube.com/watch?v=aId6iahUGLI

//C++ Code

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int ar[n],br[n];
    memset(br,0,sizeof(br));
    
    for(int i=0;i<n;i++){
        cin >> ar[i];
        br[i] = ar[i];
    }
    
    for(int i=1;i<n;i++){
        ar[i] ^= ar[i-1];
    }
    
    int set_bit = ar[n-1];

    vector<int> v;
    for(int i=0;i<n;i++){
        if(br[i]%2 == set_bit%2){
            v.push_back(br[i]);
        }
    }
    
    v[0]=set_bit%2;
    for(int i=1;i<v.size();i++){
        v[i]^=v[i-1];
    }
    int res = v[v.size()-1];
    
    int ans = res^set_bit;
    
    cout << res << " " << ans << endl;
    
}
