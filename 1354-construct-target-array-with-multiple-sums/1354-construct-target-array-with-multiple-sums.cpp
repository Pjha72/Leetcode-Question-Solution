class Solution {
public:
    bool isPossible(vector<int>& target) {  
        
        while(1){
        int posmax=0;
           long sum =0;
            
            /*finding location of maximum element and also finding total sum*/
        for(int i=0; i<target.size(); i++){
             if(target[posmax]<target[i]){
                 posmax = i;
             }
            sum += target[i];
        }
            
            long int diff = sum - target[posmax];
            
            
            /*if maximum element becomes 1 means all element is equal 1*/
            /* if diff == 1 means for eg [1,9] -> true soln but when 9%1 it 
			gives 0 so this condition is needed*/
            
            if(target[posmax] == 1 || diff == 1){
                return true;
            }
            
            /*[10,12,3] consider this case sum-max is greater than max element
			diff should not be greater than max*/
            /* [1,1,2] here sum - max is equal 0 so this is false*/
            /* [20,5] here max%diff ==0 so this needs to be false*/
            
            if(diff > target[posmax]|| diff ==0|| target[posmax]%diff ==0){
                return false;
            }
            
            /*reduce the max element*/
        
            target[posmax] %= diff;
          }       
    }
};