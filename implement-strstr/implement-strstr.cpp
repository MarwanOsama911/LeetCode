class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLength = haystack.size();
        int nLength = needle.size();
        
        for(int i =0;i<hLength;i++)
        {
            if(haystack[i] == needle[0] && needle == haystack.substr(i, nLength))
            {
                return i;   
            }   
        }
        
        return -1;
    }
};