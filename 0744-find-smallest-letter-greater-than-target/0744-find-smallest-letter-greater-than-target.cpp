class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target)
                return letters[i];
            
                
        }
        
        // int start=0,end=letters.size()-1;
        // while(start<=end){
        //     int mid = end/2;
        //     if(start == end){
        //         if(letters[mid]<target){
        //             return letters[mid+1];
        //         }
        //         else if(letters[mid]>target){
        //             return letters[mid];
        //         }
        //         else {
        //             return letters[mid+1];
        //         }
        //     }
        //     if(letters[mid]>target){
        //         end = mid - 1;
        //     }
        //     else if(letters[mid]<target){
        //         start = mid + 1;
        //     }
        //     else{
        //         return letters[mid+1];
        //     }
        // }
        return letters[0];
    }
};