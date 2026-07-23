class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> hash;
        int l=0;
        int n=s.size();
        int result=0;
        int maxfreq=0;
        for(int r=0;r<n;r++)
        {
            hash[s[r]]++;
            maxfreq = max(maxfreq,hash[s[r]]);

            while((r-l+1) - maxfreq > k)
            {   
                hash[s[l]]--;
                l++;
            }   
            result = max(result,(r-l+1));
        }
        return result;
    }
};
