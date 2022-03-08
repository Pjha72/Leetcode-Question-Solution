class Solution {
public:
    int minimumSum(int num) {
        int index=0;
        vector<int> digit(4);
        while(num>0){
            digit[index++]=num%10;
            num/=10;
        }
        sort(digit.begin(),digit.end());
        return digit[2]+digit[0]*10 + digit[3] +digit[1]*10;
    }
};