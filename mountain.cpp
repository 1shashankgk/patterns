#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 9,i,j,;
    for(i=1;i<=n;i++)
    {
        //space
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        //star
        for(j=1;j<=i;j++)
            cout<<" *";
        cout<<endl;
    }

    return 0;
}
