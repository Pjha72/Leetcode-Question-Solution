#include<string>
class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        for(int i=0; i < s.size(); i++){
            if(temp.size()>0 && s[i]==temp[temp.size()-1]){
               temp.pop_back(); 
            }
            else{    
                temp+=s[i];
            }
        }
        return temp;
    }
};