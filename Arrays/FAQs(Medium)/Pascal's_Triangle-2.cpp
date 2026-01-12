#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> pascalTriangleII(int r) {
      vector<int> ans(r);
      ans[0]=1;
      for(int i=1; i<r; i++){
        ans[i]=(ans[i-1]*(r-i))/i;
      }    
      return ans;
  }
};

int main() {
    int r = 5; 
    Solution sol; 
    vector<int> ans = sol.pascalTriangleII(r);
    cout << "Row " << r << ": ";
    for(int x : ans) cout << x << " ";

    return 0;
}
