class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
       for(int i=0;i<jewels.length();i++ ){
           int temp=jewels[i];
           for(int j=0;j<stones.length();j++){
               if(temp==stones[j]){
                   count++;
               }
           }
       }
        return count;
    }
};