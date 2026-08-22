# include <stdio.h>

int main()
{
    int arr[5];
    for (int i = 0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for (int i = 0; i<5;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
}

# include <stdio.h>

int main(){
    int arr[10];
    int n = 5,a,b;
    printf("Enter your number : ");
    scanf("%d",&a);
    printf("Enter the index number : ");
    scanf("%d",&b);

    for(int i = 0;i <n;i++)
    {
         printf("Enter the %d array element: ",i);
        scanf("%d",&arr[i]);
    }
    printf("my array: ");

    for(int i = 0;i <n;i++)
    {
        printf(" %d ",arr[i]);
    }
    int i = n-1;
    for(;i>=b;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[i+1] = a;
    n++;
    printf("\n");
    printf("my array after inserting %d at index %d: ",a,b);
    for(int i = 0;i <n;i++)
    {
        printf(" %d ",arr[i]);
    }

}

# include <stdio.h>
int main()
{
    int arr[7];
    int n = 5,a;
    printf("Enter your number : ");
    scanf("%d",&a);
    for(int i = 0;i <n;i++)
    {
         printf("Enter the %d array element: ",i+1);
        scanf("%d",&arr[i]);
    }
    

    for(int i = 0;i <n;i++)
    {
        if(arr[i] > a)
        {
            printf("%d",i);
        }
        
    }
    

}


# include <stdio.h>
int main()
{
    printf("Enter the size of array: ");
}
