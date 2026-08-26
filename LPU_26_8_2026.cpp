/* Insertion in Sorted Array the best way to do it by bubble sort*/

#include <iostream>

using namespace std;
void print_arr(int arr[],int n)
{
    for(int i = 0;i <n;i++)
    {
        printf(" %d ",arr[i]);
    }
}

int main()
{
    int n = 5;
    int arr[5] = {12,2,45,5566,23};
    cout<<"Array :";
    print_arr(arr,n);
    cout<<"\n";

    for (int i = 0;i <n-1;i++)
    {   bool flag = true;;
        for(int j =0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            }
        }
        if(flag == false)
        {
            break;  
        }
    }
    cout <<"Sorted Array :";
    print_arr(arr,n);
    return 0;
}



/*Insertion in Sorted Array the best way to do it by bubble sort in the shorted possition */

#include <iostream>
# include <stdio.h>
using namespace std;

int main()
{
    int arr[10];
    int n = 5;
    for(int i = 0;i <n;i++)
    {
        printf("Enter the %d array element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array : ");
    for(int i = 0;i <n;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("\n");
    int x;
    cout<<"Enter the array elements : ";
    cin>>x;
    cout<<"element is : "<<x;

/*  the actual insertion logic */

    int i;
    for (i = n-1;i>=0 && arr[i]>x;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[i+1] = x;
    n++;
    
/* till here */


    printf("\n");
    printf("Array : "); 
    for(int i = 0;i <n;i++)
    {
        printf(" %d ",arr[i]);
    }
    

}

/* Insertion Sort */

# include <iostream>
using namespace std;
int main()
{
    int arr[10] = {12,2,45,5566,23};
    int n = 5;

    for(int i =1;i<n;i++)
    {
      int j;
      int x = arr[i];
      for(j = i-1;j>=0 && arr[j]>x;j--)
      {
        arr[j+1] = arr[j];
      }
        arr[j+1] = x;
    }
    for(int i = 0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}