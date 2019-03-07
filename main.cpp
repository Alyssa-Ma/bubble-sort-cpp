#include <iostream>

using namespace std;

void bubsort(int arr[], int s)
{
    int temp;
    for(int i = 0; i < s - 1; i++)
    {
        for(int j = 0; j < s - i - 1; j++)
        {
            if(arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;


                for(int i = 0; i <= s - 1; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
    }
}

int main()
{
    int a;
    int arr[] = {2, 3, 45, 657, 5, 5};
    a = 6;
    bubsort(arr, a);

    int s = 10;
    int *b = new int[s];

    for(int i = 0; i < s; i++)
    {
        b[i] = rand() %1000;
    }

    bubsort(b, s);
    return 0;
}
