class Solution {
public:
    int fun(vector<int>& piles, int h)
    {
        int totalhrs = 0;
        for(int i=0;i<piles.size();i++)
        {
            totalhrs += ceil((double)piles[i] / (double)h);
        }
        return totalhrs;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans = INT_MAX;

        while( low <= high)
        {
            int mid = (low + high)/2;
             ans = fun(piles,mid);
            if(ans <= h)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }           
        }
        return low;
    }
};
