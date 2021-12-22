#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        //space
        int space = n-i;
        while(space--){
            cout<<" ";
        }
        //star
        for(j=1;j<=i;j++)
            cout<<j;
        
        //another triangle
        
        int start = i-1;
        while(start)
        {
            cout<<start--;
        }
        cout<<endl;
        
    }

    return 0;
}

/*
     1
    121
   12321
  1234321
 123454321
12345654321
      
*/
