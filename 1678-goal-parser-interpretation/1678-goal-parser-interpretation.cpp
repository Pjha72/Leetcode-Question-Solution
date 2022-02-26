class Solution {
public:
    string interpret(string command) {
        for(int i=command.length()-2;i>=0;i--){
            if(command[i]=='(' && command[i+1]== ')'){
                command.replace(i,2,"o");
            }
            if(command[i]=='(' && command[i+1]== 'a'){
                command.replace(i,4,"al");
            }
            if(command[i]=='G' ){
                command.replace(i,1,"G");
            }
        }
        return command;
    }
};