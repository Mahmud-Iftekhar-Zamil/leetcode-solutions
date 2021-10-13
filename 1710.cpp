bool sortCol(const vector<int>& v1, const vector<int>& v2) {
    return (v1[1]>v2[1]);
}

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n = boxTypes.size();
        int res,num,num_of_box,units_per_box;
        num = res = num_of_box = units_per_box = 0;
        
        sort(boxTypes.begin(),boxTypes.end(),sortCol);
        
        for(int i=0;i<n;i++) {
            num_of_box = boxTypes[i][0];
            units_per_box = boxTypes[i][1];

            if(num_of_box<=truckSize) {
                res+=num_of_box*units_per_box;
                truckSize-= num_of_box; 
            } else if(num_of_box>truckSize && truckSize!=0) {
                res+=truckSize*units_per_box;
                truckSize-=truckSize;
            }
            if(truckSize==0) break;
        }
        
      return res;          
    }
};
