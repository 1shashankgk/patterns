#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        //space
        int count=i,space = 0;
        while(space<i){
            cout<<" ";
            space++;
        }                       
        //star
        for(j=n;j>=i;j--)
            cout<<count++;
        cout<<endl;
    }
    return 0;
}
/*      
1 2 3 4 5
  2 3 4 5
    3 4 5
      4 5
        5
*/
