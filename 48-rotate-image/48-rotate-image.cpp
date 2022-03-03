class Solution { 
public:
    void transpose(vector<vector<int>>&m){
        for(int i=0;i<m.size();i++){
            for(int j=i+1;j<m.size();j++){
                int temp =m[i][j];
                m[i][j]=m[j][i];
                m[j][i]=temp;
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        int j=0;
        while(j< (matrix.size())/2){
            for( int i=0;i<matrix.size();i++){
            // for(int j=0;j<(matrix.size())/2;j++){
            //     int temp = matrix[i][j];
            //     matrix[i][j] = matrix[i][matrix.size()-1-j];
            //     matrix[i][matrix.size()-1-j] = temp;
            // }
            
            swap(matrix[i][j] , matrix[i][matrix.size()-1-j]);
        }
        j++;
    }
        
    }
   
};