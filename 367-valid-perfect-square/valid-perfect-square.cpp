class Solution {
public:
    bool isPerfectSquare(int num) {
         int i=0; 
        int j=sqrt(num);
        while(i<=j)
        {
            if(i*i == num)
            {
                return true;
            }
            else if(i * i <num)
            {
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};