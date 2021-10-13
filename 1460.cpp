class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_set<int> s;
        for(int x: target)
            s.insert(x);
        
        for(int x: s){
            if(count(target.begin(),target.end(),x) != count(arr.begin(),arr.end(),x))
                return false;
        }
        return true;
    }
};
