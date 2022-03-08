class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int x1=0,x2=0;
        for(int i:arr1){
            x1^=i;
        }
        for(int i:arr2){
            x2^=i;
        }
        return x1&x2;
    }
};