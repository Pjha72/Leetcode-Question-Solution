class Solution {
public:
    string interpret(string command) {
        string temp = "";
        for(int i=0;i<command.length();i++){
            if(command[i]=='G'){
                temp.append("G");
            }
            else if(command[i]=='(' && command[i+1]==')'){
                temp.append("o");
            }
             else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
                temp.append("al");
            }
        }
        return temp;
    }
};