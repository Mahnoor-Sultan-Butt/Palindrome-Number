#include<iostream>
using namespace std;
void palindrome(int arr[], int j)
{
int flag = 0;
for(int i = 0; i<= j/2 && j != 0; i++)
{
if (arr[i] != arr[j - i - 1])
{
flag = 1;

break;
}
}

if (flag == 1)
cout<<"It is not palindrome"<<endl;
else
cout<<"It is palindrome array"<<endl;
}
int main ( )
{
int arr[]={2,1,1,1,1,2};
int j = sizeof(arr)/sizeof(arr[0]);
palindrome(arr,j);
return 0 ;
}
