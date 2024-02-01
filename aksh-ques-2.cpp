#include<iostream>
using namespace std;
int main()
{
  int i,j,n,flag=0,a,r,c,lb,mid=0,ub;
  cout<<"Enter the size of the array"<<endl;
  cin>>n;
  int arr[n];
  cout<<"enter the element to be searched"<<endl;
  cin>>a;
  cout<<"Enter the array elements"<<endl;
  for(j=0;j<n;j++)
  {
      cin>>arr[j];
  }
  lb=0;
  ub=n-1;
  c=0;
  flag=0;
  for(j=0;j<n;j++)
  {
      mid=(ub+lb)/2;
      c=c+1;
      if(arr[mid]==a)
      {
        flag=flag+1;
        break;
      }
      else if(a>arr[mid])
      {
        lb=mid+1;
      }
      else if(a<arr[mid])
      {
        ub=mid-1;
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
