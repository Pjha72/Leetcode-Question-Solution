class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int sum=0;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
            for(int j=0;j<students.size();j++){
                sum+= abs(students[j]-seats[j]);
            }
        return sum;
    }
};