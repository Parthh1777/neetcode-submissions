class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count the frequency of each element
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Copy the map into a vector of pairs
        // Pair format: {element, frequency}
        vector<pair<int, int>> freqVec(freq.begin(), freq.end());

        // Step 3: Sort the vector in descending order of frequency
        sort(freqVec.begin(), freqVec.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second > b.second;
             });

        // Step 4: Store the first k most frequent elements
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(freqVec[i].first);
        }

        return ans;
    }
};