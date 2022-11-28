#include <omp.h>
#include "sort.h"
#include <iostream>

int main()
{
    double start1;
    double start2;
    double end1;
    double end2;
    while (true)
    {
        int n = 0;
        cout << "Размер:" << endl;
        cin >> n;
        int *arr = new int [n];

        fill_random(arr,n,0,100);
        start1 = omp_get_wtime();
        sort (arr,n);

        end1 = omp_get_wtime();
        double time1 = end1 - start1;

        cout << n << ":" << time1 << " (ss)";

        fill_random(arr, n, 0, 100);

        start2 = omp_get_wtime();

        quick_sort(arr, 0, n - 1);

        end2 = omp_get_wtime();
        double time2 = end2 - start2;

        cout << ", " << time2 << " (qs)" << endl;
        delete[] arr;
    }
    return 0;
}