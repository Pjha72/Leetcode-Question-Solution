class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int x1=0;
        int x2=0;
        for(int i:arr1)
            x1^=i;
        for(int j:arr2)
            x2^=j;
        
        
        return x1&x2;
    }
};