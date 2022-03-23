class Solution {
public:
    // int sum(int num){
    //     int ans =0;
    //     while(num>0){
    //         ans=ans+(num%10);
    //         num=num/10;
    //     }
    //     return ans;
    // }
    int addDigits(int num) {
        // int temp = sum(num);
        // while(temp/10>0){
        //     temp=sum(temp);
        // }
        // return temp;
        if(num==0){
            return 0;
        }
        if(num%9==0){
            return 9;
        }
        else{
            return num%9;
        }
    }
};