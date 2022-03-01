class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count =0 ;
        int total = row*col;
        
        vector<int> ans;
        //Index
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col -1;
        
        while(count < total){
            
            //print starting row
            for(int Index=startingCol; count < total && Index<=endingCol;Index++){
                ans.push_back(matrix[startingRow][Index]);
                count++;
            }
            startingRow++;
            //print ending Col
            for(int Index=startingRow; count < total && Index<=endingRow;Index++){
                ans.push_back(matrix[Index][endingCol]);
                count++;
            }
            endingCol--;
            //print ending row
            for(int Index = endingCol ; count < total && Index>=startingCol;Index--){
                ans.push_back(matrix[endingRow][Index]);
                count++;
            }
            endingRow--;
            //print starting col
            for(int Index=endingRow; count < total && Index>=startingRow;Index--){
                ans.push_back(matrix[Index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};