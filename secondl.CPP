#include <iostream>
using namespace std;

int main()
{
int a,i;
cin>>a;
int arr[a],temp=0,max=0,count;
for(i=0;i<a;i++)
{
cin>>arr[i];
if(max<arr[i])
{
max=arr[i];
}

}
for(i=0;i<a;i++)
{
if(max>arr[i])
{
if(temp<arr[i])
{
temp=arr[i];
}
}
}
cout<<temp;

return 0;
}
