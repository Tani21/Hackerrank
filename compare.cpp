#include <iostream>
using namespace std;

int a[3], b[3];

void comparison(int *a, int *b)
{
    int alicepoint[2]={0,0};
    
    for(int i=0; i<3; i++)
    {
        if(a[i]>b[i])
        {
            alicepoint[0]=alicepoint[0]+1;   
        }
        
        if(a[i]==b[i])
        {  
        }
        
        if(a[i]<b[i])
        {
            alicepoint[1]=alicepoint[1]+1;   
        }     
    }
    
    for(int l=0; l<2; l++)
    {
        cout << alicepoint[l]<<" ";
    }
}

int main()
{
    for(int j=0; j<3; j++)
    {
        cin >> a[j];
    }
    
    for(int k=0; k<3; k++)
    {
        cin >> b[k];
    }
    
    comparison(a,b);
    

    return 0;
}

