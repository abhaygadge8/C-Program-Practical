//Write a C++ program to accept the list from the user and sort it in increasing order by using Sort function. Use the reference variables.
#include <iostream>
using namespace std;
void sort(int ( & arr)[],int);
void Display(int ( & arr)[],int);
int main() {
    int n;
    cout<<"Please enter how many elements are there in the list: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Please enter elements in the list: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before sorting: "<<endl;
    Display(arr,n);
    sort(arr,n);
    cout<<"After sorting: "<<endl;
    Display(arr,n);

    return 0;
}

void Display(int ( & array)[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"\n";
}

void sort(int ( & arr)[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
            }
        }
    }
}
