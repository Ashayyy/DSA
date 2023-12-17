class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;
        for(int i=0;i<columnTitle.size();i++){
    // finding numeral value of each charachter by subtracting it from base 65 
            int x = (columnTitle[i] -'A') + 1;
    // adding it with i(th) multiples of 26 in each iteration where i is index
            ans = (ans*26)+x;
        }
        
        return ans;
    }
};