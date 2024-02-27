class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
             //edge cases
        if( s.size() == 1 || s.size() != goal.size() )
            return false;
            
    // if both the strings are equal then check that if there non-unique elements or not         // if there are unique elements of size strings then it cannot be modified
        
        if(s==goal) {
            
            unordered_set<char> m;
            
            for(int i=0;i<s.size();i++){
                m.insert(s[i]);
            }
            
            if(s.size()>m.size())
                return true;
            
        }
        
        // taking two maps to store each strings char occurence in one-one map
        unordered_map<char,int> a,b;
        
        for(int i=0;i<s.size();i++){
            a[s[i]]++;    // s is stored in "a" map
            b[goal[i]]++; // goal is stored in "b" map
        }
        
        // now traversing string 
        int count=0;
        for(int i=0;i<s.size();i++) {
            
            // checking whether one string char is present in another 
            // if not then there is char which doesn't exist in another string 
            // then modification can't occur 
            if(a[goal[i]]==0 || b[s[i]]==0)
                return false;
            
            // if current ongoing char is not same that means swapping can occur
            
            if(s[i]!=goal[i]){
                // increasing count to check how much swapping is needed i.e, 2 for 1 swap
                // 4 for 2 swap....so on.
                count++;
                
                // decreasing occurence of char from each string if we won't decrease then it can happen that for let's say s has 3 'a' and goal has 1 'a' then is will give true and for all char of 's' only one will be compared so problem will occur.
                a[goal[i]]--;
                b[s[i]]--;
            }
        }
        
        // if count is 2 then only 1 swap required else false.
        return count == 2 ? true : false;
    }
};