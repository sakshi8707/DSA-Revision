#include<bits/stdc++.h>
using namespace std;


**brute approch**
*TC : o(n*m)*o(n*m)+o(n*M)
*SC : o(1)

**better  approch**
*TC : o(n*m)
*SC : o(N)+o(m)

**Optimal approch**
*TC : o(n*m)
*SC : o(1)

vector<vector<int>> setZero(vector<vector<int>> mat,int n,int m)
{

    **optimal approch**

    int col0 = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==0)
            {

                mat[i][0] = 0; //marking the rowArr

                if(j!=0)
                {
                    mat[0][j] = 1;
                }
                else
                {
                    col0 = 0;
                }
            }
        }
    }

    //now marking all the 1's to 0's in row and colARR

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]!=0)
            {
            if(mat[i][0]==1 || mat[0][j])
            {
               mat[i][j] = 0;

            }
            }
        }
    }

    //now marking the first col then firs row's
   if(mat[i][j]==0)
   {
     for(int i=0;i<n;i++)
     {
        mat[0][i] = 0;
     }
   }

   //now marking all the row's
    if(col0 == 0)
   {
    for(int i=0;i<m;i++)
   {
   mat[i][0] = 0;
   }
   }

   return matrix;
}





int main()
{

    return 0;
}
