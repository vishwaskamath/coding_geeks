/* The factors from 2 to sqrt(n) have multiples from sqrt(n)+1 to n 
Expected Time Complexity: O(sqrt(N))
Expected Space Complexity: O(1) */

class Solution{
public:
    int isPrime(int N){
        int flag = 1;
            for(int i=2;i<=sqrt(N);i++)
            {
                if(N%i==0)
                {
                    flag = 0;
                    break;
                }
            
            }
        if(N==1)
        {
            return 0;
        }
        else if(flag == 0)
        {
            return 0;
        }
        else return 1;
            }
};
