#include<iostream>
using namespace std;

int search(int arr[],int a,int n)
{
  int i;
  if(arr[0]==a)
  {
     return 0;
  }
  i=1;
  while(i<n && arr[i]<=a)
  {
    i=i*2;
  }
  return min(i,n-1);
}

string linear(int arr[],int n,int a)
{
  int in=search(arr,a,n);
  int i;
  int start=in;
  int end=min(in,n-1);
  for(i=start;i<=end;++i)
  {
    if(arr[i]==a)
    {
      return "PRESENT";
    }
  }
  return"NOT PRESENT";
}
  
      
int main()
{
  int j,n,flag=0,a,r,c=0;
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
  cout<<linear(arr,n,a)<<endl;
  return 0;
}
