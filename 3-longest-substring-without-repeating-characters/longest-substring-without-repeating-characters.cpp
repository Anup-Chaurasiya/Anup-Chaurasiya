class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        // sliding window based problem

        vector<bool>count(255,0);
        int first = 0,second=0,length=0;
        while(second<s.size()){
            
            while(count[s[second]]){
                count[s[first]]=0;
                first++;
            }
            count[s[second]]=1;
            length=max(length,second-first+1);
            second++;

        }
        return length;
    }
};