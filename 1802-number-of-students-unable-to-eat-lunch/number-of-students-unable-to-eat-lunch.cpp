class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
      int ones=0;
      int zero=0;
      int n=students.size();
      for(int i=0;i<n;i++){
        if(students[i]==1){
            ones++;
        }
      }
      zero=n-ones;
      for(int i=0;i<sandwiches.size();i++){
        if(sandwiches[i]==1){
            ones--;
        }else{
            zero--;
        }
        if(ones==-1||zero==-1){
            return max(ones,zero);
        }
      }
      return 0;  
    }
};