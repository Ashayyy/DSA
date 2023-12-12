class Solution {
public:
    vector<string> findWords(vector<string>& words) {
    int c1,c2,c3;
        for(int i=0;i<words.size();i++){
            string s = words[i];
            c1=0,c2=0,c3=0;
            for(int j=0;j<s.size();j++){
                if(s[j]=='A' || s[j]=='S' || s[j]=='D' || s[j]=='F' || s[j]=='G' || s[j]=='H' || s[j]=='J' || s[j]=='K' || s[j]=='L'|| s[j]=='a' || s[j]=='s' || s[j]=='d' || s[j]=='f' || s[j]=='g' || s[j]=='h' || s[j]=='j' || s[j]=='k' || s[j]=='l' ){
                    c1++;
            }
        else if(s[j]=='Q' || s[j]=='W' || s[j]=='E' || s[j]=='R' || s[j]=='T' || s[j]=='Y' || s[j]=='U' || s[j]=='I' || s[j]=='O' || s[j]=='P' || s[j]=='q' || s[j]=='w' || s[j]=='e' || s[j]=='r' || s[j]=='t' || s[j]=='y' || s[j]=='u' || s[j]=='i' || s[j]=='o' || s[j]=='p'){
            c2++;
        }
        else{
            c3++;
        }
    }
            if(c1!=s.size() && c2!=s.size() && c3!=s.size()){
                    words.erase(words.begin()+i);
                    i--;
                }
        }
        
        return words;
    }
};