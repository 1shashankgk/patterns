First Occurence, Last Occurence, Number Of Occureneces


#include <bits/stdc++.h>
using namespace std;
void binary(int arr[], int n,int ele)
{
    int top =0,bot=n-1,mid,count=0,first=0;
    while(top<=bot)
    {
        mid = (top+bot)/2;
        if(ele == arr[mid])
        {
            first = mid;
            bot = mid-1;
        }
            
        else if (ele > arr[mid])
            top = mid+1;
        else
            bot = mid-1;
    }
    cout<<"First = "<<first+1;
    int last = first;
    int f =first;
    while(arr[first]==ele)
    {
        last++;
        first++;
    }
    cout<<"\nLast = "<<last;
    cout<<"\nNumber Of Occurences = "<<last-f;
   
}
int main()
{
   int arr[]={2,4,5,5,5,6,7,8,9};
   int n = sizeof(arr)/sizeof(arr[0]), ele = 5;
   binary(arr,n,ele);
}


