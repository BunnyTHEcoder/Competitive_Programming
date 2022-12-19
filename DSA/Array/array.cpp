#include<iostream>
using namespace std;
int main()
{
    int n;  //array size
    cin>>n;
    int arr[n];  //Decalring array
    for(int i=0; i<n; i++)
        cin>>arr[i];  // inserting elements in array
    
    for(int i=0; i<6; i++)
        cout<<arr[i]<<"  "; // printing array elements
    cout<<endl;
    return 0;
}