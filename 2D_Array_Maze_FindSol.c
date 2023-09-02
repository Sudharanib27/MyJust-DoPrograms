/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define n 5

int k=1;
int find_route(int a[][n], int i, int j)
{
   
    if(i>4  || j>4)
    {
       return 0; 
    }
    
    if(a[i][j]== 0)
    {
        return 0;
    }
    
        
    if(i==4 && a[i][j]==1)
        {
            
            printf("End of route number - %d !\n",k++);
            return 0;
        }
        
    
    // To the right
    find_route(a,i,j+1);
    
        // To the down
    find_route(a,i+1,j);
    
    // To diagonal
    find_route(a,i+1,j+1);
        
         
    
    
    
}

int main()
{
    int a[n][n]={{1,0,1,0,1},
                 {1,0,0,1,1},
                 {1,0,1,1,0},
                 {1,0,0,1,0},
                 {1,0,1,1,0}};
                
    for(int i=0;i<n;i++)
    {
        find_route(a,0,i);
    
    }
}
