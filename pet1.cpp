#include <iostream>
using namespace std;

// int[] sort(int arr[])
// {
//     int min;
//     int i, j, num;
//     int len = sizeof(a) / sizeof(a[0]);
//     for (j = 0; j < len; j++)
//     {
//         min = a[j];
//         for (i = j; i < len; i++)
//         {

//             if (min > a[i])
//             {
//                 num = min;
//                 min = a[i];
//                 a[i] = num;
//             }
//         }
//         a[j] = min;
//     }
//     return a[];
// }

int missingint(int* a, int len)
{

    
        int min;
        int i, j, num;
       
        
        for (j = 0; j < len; j++)
        {
            min = a[j];
            for (i = j; i < len; i++)
            {

                if (min > a[i])
                {
                    num = min;
                    min = a[i];
                    a[i] = num;
                }
            }
            a[j] = min;
        }
      
            // printf(a[i]);
    for (int i = 0; i < len-1; i++)
    {
        int num = a[i]+1;
        if (num != a[i + 1])
        {
            return num;
        };
    }
    return -1;
}

int main()
{
    int a[] = {5, 4, 3, 6, 2, 8};
    int start = 1;
    int end = 8;
    int len=sizeof(a)/sizeof(a[0]);
    cout << missingint(a, len) << endl;
}