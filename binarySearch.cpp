#include<iostream>

using namespace std;


int findELement(int arr[],int n,int key)
{
  
  int s=0;
int e=arr.size()-1;


while(s<=e)
{
  int mid=s+(e-s)/2;
  if(arr[mid]==key)
  {
    return mid;
  }
  else if(arr[mid]<key)
  {
    s=mid+1;
  }
  else{
    e=mid-1;
  } 
}
  return -1;
  
}

int main()
{
 int arr[100];
int n;
  cout<<"Enter the size of array"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
  cout<<"Enter the element to be searched";
  int key;
  cin>>key;
cout<<findELement(arr,n,key);

}
  
