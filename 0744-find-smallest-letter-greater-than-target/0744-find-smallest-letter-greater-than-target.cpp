class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
  
        char ans=letters[0];
        int start=0,end=letters.size()-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            
            if(letters[mid]>target){
                end = mid - 1;
                ans = letters[mid];
            }
            else {
                start = mid + 1;
            }
        }
        return ans;
    }
};