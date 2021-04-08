class Solution{   
public:
    int isPowerOfAnother(long long X, long long Y){
      
        int flag = 0;
        long long int Z=0;
            for(int i = 0;i<Y;i++)
            {
                Z = (long long int)pow(X,i);
               
                if(Z==Y)
                {
                    flag = 1;
                    break;
                }
            }
            
         if(flag==1)
         {
             return 1;
         }
         else return 0;
        }
};

/* 
Example 1:

Input:
X = 2, Y = 8
Output:
1
Explanation:
2^3 is equal to 8.
*/
