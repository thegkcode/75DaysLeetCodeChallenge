class Solution {
public:
    static bool myComp(pair<string, int> &a, pair<string, int> &b){
        return a.second > b.second;
    }

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string, int>> p;
        int n=names.size();

        for(int i=0; i<n; i++){
            p.push_back({names[i], heights[i]});
        }

        sort(p.begin(), p.end(), myComp);

        vector<string> ans;
        for(int i=0; i<n; i++){
            ans.push_back(p[i].first);
        }

        return ans;
    }
};