#include<iostream>
using namespace std;
int main()
{
  int i,j,n,flag=0,a,r,c=0;
  cout<<"Enter the size of the array"<<endl;
  cin>>n;
  cout<<"Enter the times u want to use"<<endl;
  cin>>r;
  int arr[n];
  for(i=0;i<r;i++)
  {
    cout<<"enter the element to be searched"<<endl;
    cin>>a;
    cout<<"Enter the array elements"<<endl;
    for(j=0;j<n;j++)
    {
      cin>>arr[j];
    }
    flag=0;
    c=0;
    for(j=0;j<n;j++)
    {
      c=c+1;
      if(arr[j]==a)
      {
        flag=flag+1;
        break;
      }
    }
    cout<<"The number of comparisons are :  "<< c <<endl;
    if(flag==1)
    {
      cout<< a <<"is present "<<endl;
    }
    if(flag==0)
    {
      cout<<"not present "<<endl;
    }
  }
}
