//search element in an array using binary search//
#include<iostream>
using namespace std;
int binarysearch(int [],int l,int r,int mid, int n );//forward declaration
int main()
{
int arr[10],l,r,mid,n;
cout<<"enter the (10) elements in the ascending order\n";//15,16,45,78,
for(int i=0;i<10;i++)
{
	cin>>arr[i];
}
cout<<"enter the elements to be search\n";
cin>>n;
 l=0;
 r=9;
 r=n-1;
 mid=(l+r)/2;
int binarysearch(int);
return 0;
}
void binarysearch(int [],int f,int q,int result, int x)
{
int arr[10],l,r,mid,n;
while(l<=r)
{

        if(arr[mid]<n)
            l = mid+1;
        else if(arr[mid]==n)
        {
            cout<<"\nThe number, "<<n<<" found at Position "<<mid+1;
            break;
        }
        else
        r = mid-1;
        mid = (l+r)/2;
}
if(l>r)
cout<<"\nThe number, "<<n<<" is not found in given Array"<<endl;
return 0;
}

