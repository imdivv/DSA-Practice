#include <bits/stdc++.h> 
using namespace std;

class Solution {
  int nCr(int n, int r){
    if(r>n-r) r=n-r;
    if(r==1) return n;
    int ans=1;
    for(int i=0; i<r; i++){
      ans=ans*(n-i);
      ans=ans/(i+1);
    }
    return ans;
  }
public:
    int pascalTriangleI(int r, int c) {
      return nCr(r-1, c-1);
      
    }
};

int main() {
    int r = 5; 
    int c = 3;
    Solution sol; 
    int ans = sol.pascalTriangleI(r, c);

    cout << "The element in the rth row and cth column in pascal's triangle is: " << ans;

    return 0;
}
