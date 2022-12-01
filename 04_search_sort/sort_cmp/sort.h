#include <iostream>
#include <random>

using namespace std;

//функция сортировки выбором
void sort(int arr[], int size);

//функция быстрой сортировки
void quick_sort(int arr[], int start, int end);

//функция сортировки на массивах разной длины
void swap(int arr[], int idx_a, int idx_b);

//функций сортировки массивов, заполненных случайными числами
void fill_random(int arr[], int n, int a, int b);