//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
       sort(arr.begin(),arr.end());
      int dup,miss;
      
      for(int i=0;i<n-1;i++){
          if(arr[i+1]==arr[i]){
              dup = arr[i];
          }
      }
      int small =1;
      for(int j=0;j<n;j++){
          if(arr[j]==small){
              small++;
          }
          
      }
      
       return {dup,small};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends