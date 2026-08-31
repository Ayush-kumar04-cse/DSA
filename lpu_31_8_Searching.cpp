/* Linear Search */

// # include <iostream>
// using namespace std;

// int main(){
//     int arr[5] = {1, 2, 45, 4, 5};
//     int n = 5;
//     int key = 45;
//     int index = -1;
//     for(int i = 0; i < n; i++){
//         if(arr[i] == key){
//             index = i;
//             break;
//         }
//     }
//     cout << "Index of key is: " << index << endl;
//     return 0;
// }

/* binary search */

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5] = {123, 234, 442, 523, 545};
//     int n = 5;
//     int key = 442;
//     int low = 0;
//     int high = n - 1;
//     int index = -1;

//     while(low <= high){
//         int mid = low + (high - low) / 2; // Fixed formula
//         if(arr[mid] == key){
//             index = mid;
//             break;
//         }
//         else if(arr[mid] < key){
//             low = mid + 1;
//         }
//         else{
//             high = mid - 1;
//         }
//     }
//     cout << "Index of key is: " << index << endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {7, 78, 5, 3, 1};
   
    int key = 5;
    int pos = -1;
    int l = 0, h = n -1;
    while(l<=h){
        int m = (l + h) / 2;

        if(arr[m] == key){
            pos = m;
            break;

        }
        else if(arr[m] < key){
            l = m + 1;
        }else{
            h = m - 1;
        }
    }
    cout<<pos<<endl;
    return 0;
}