#include <iostream>
#include <vector>

using namespace std;

// Шаги сортировки Шелла
void shellSort(vector<int>& arr) {
    int n = arr.size();

    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; ++i) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    // Исходный массив
    vector<int> arr = {12, 34, 54, 2, 3};

    cout << "Исходный массив: ";
    for (int num : arr) {
        cout << num << " ";
    }

    // Применяем сортировку Шелла
    shellSort(arr);

    // Выводим отсортированный массив
    cout << "\nОтсортированный массив (по возрастанию): ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
