/*  selection sort */
// # include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10] = {12,2,45,5566,23};
//     int n = 5;

//     int flag = 0;
//     for (int i = 1 ;i <n;i++)
//     {
//         if (arr[i] < arr[flag])
//         {   
//             flag = i;

//         } 
//     }
//     cout<<flag;
    
//     return 0;
// }

// # include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10] = {12,2,45,5566,23};
//     int n = 5;

//     int flag = 0;
//     for (int i = 1 ;i <n;i++)
//     {
//         if (arr[i] < arr[flag])
//         {   
//             flag = i;

//         } 
//     }
//     swap(arr[0], arr[flag]);
//     for (int i = 0;i<n;i++)
//     {
//         cout<<arr[i];
//     }
    
//     return 0;
// }


# include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12,2,45,5566,23};
    int n = 5;

    for(int i = 0; i<n-1;i++)
    {
        int m = i;
        for (int j = i+1 ;j <n;j++)
        {
            if (arr[j] < arr[m])
            {   
                m = j;

            } 
        }
        swap(arr[i],arr[m]);

    
    }
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

