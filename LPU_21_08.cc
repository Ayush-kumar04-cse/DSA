# include <iostream>

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
    return 0;

    
    

    

}
   
