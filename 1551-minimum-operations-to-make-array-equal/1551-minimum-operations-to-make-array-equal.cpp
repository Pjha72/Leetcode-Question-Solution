class Solution {
public:
    int minOperations(int n) {
        int m = n/2;
        if(n&1){
            return m*(m+1);
        }
        else{
            return m*m;
        }
    }
};