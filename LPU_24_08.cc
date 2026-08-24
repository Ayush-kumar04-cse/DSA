/* INSERTION ADN DELLEATION IN THE CODE */

# include <iostream>
using namespace std;

void print_arr(int arr[],int n)
{
    for(int i = 0;i <n;i++)
    {
        printf(" %d ",arr[i]);
    }
}

void insert_key(int arr[],int &n,int pos,int key)
{
    for(int i = n-1;i>=pos;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = key;
    n++;
}

void delete_key(int arr[],int &n,int pos)
{
    for(int i = pos;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
}


int main()
{
    int arr[10];
    int n = 5;
    for (int i = 0;i <n;i++)
    {
         printf("Enter the %d array element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array : ");
    print_arr(arr,n);
    printf("\n");
    printf("Array size : %d",n);
    printf("\n");
    int pos = 2,key = 12;
    insert_key(arr,n,pos,key);
    printf("Array : ");
    print_arr(arr,n);
    printf("\n");
    printf("Array size : %d",n);
    

    printf("\n");
    delete_key(arr,n,3);
    printf("Array : ");
    print_arr(arr,n);
    printf("\n");
    printf("Array size : %d",n);
    return 0;
}



/* bubble sort code  */



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
    int arr[5] = {34, 23, 354, 42, 52};
    cout<<"Array :";
    print_arr(arr,n);
    cout<<"\n";

    for (int i = 0;i <n-1;i++)
    {
        for(int j =0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            }
        }
    }
    cout <<"Sorted Array :";
    print_arr(arr,n);
    return 0;
}
