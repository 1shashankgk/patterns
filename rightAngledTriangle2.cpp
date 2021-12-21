#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        //space
        int space =1;
        while(space<i)
        {
            cout<<" ";
            space++;
        }
        //star
        for(j=n;j>=i;j--)
            cout<<"*";
        cout<<endl;
       
    }

    return 0;
}
/*

******
 *****
  ****
   ***
    **
     *
*/
