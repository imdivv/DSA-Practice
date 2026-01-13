#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
    vector<int> genrow(int r){
      long res=1;
      vector<int> resrow;
      resrow.push_back(1);
      for(int col=1; col<r; col++){
        res=(res*(r-col))/col;
        resrow.push_back(res);
      }
      return resrow;
    }
public:
    vector<vector<int>> pascalTriangleIII(int n) {
      vector<vector<int>>ans;
      for(int row=1; row<=n; row++){
        ans.push_back(genrow(row));
      }
      return ans;
    }
};

int main(){
    int n = 5;
    Solution sol;
    vector<vector<int>> pascalTriangle = sol.pascalTriangleIII(n);
    for (auto& row : pascalTriangle) {
        for (auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
