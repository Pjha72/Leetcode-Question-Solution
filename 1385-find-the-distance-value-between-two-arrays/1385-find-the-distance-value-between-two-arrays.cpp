
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans=0;
        for(int i=0;i<arr1.size();i++){
            int element = arr1[i];
            for(int j=0;j<arr2.size();j++){
                if(abs(element - arr2[j])<=d){
                    ans++;
                    break;
                }
            }
        }
        return arr1.size()-ans;
    }
};