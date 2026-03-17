class Solution {
public:
    static bool comp(pair<int, int> &a, pair<int, int> &b){
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;

        for(int num : nums){
            mp[num]++;
        }

        vector<pair<int, int>> mp_vec(mp.begin(), mp.end());
        sort(mp_vec.begin(), mp_vec.end(), comp);

        for(int i=0; i<k; i++){
            ans.push_back(mp_vec[i].first);
        }
        return ans;
        
    }
};