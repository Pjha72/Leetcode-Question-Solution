class Solution {
public:
    string defangIPaddr(string address) {
        string temp = "";
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                temp.push_back('[');
                temp.push_back('.');
                temp.push_back(']');
            }
            else{
                temp.push_back(address[i]);
            }
        }
        return temp;
    }
};