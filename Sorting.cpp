#include <bits/stdc++.h>
using namespace std;

// Selection Sort
void selection(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int mini = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

// Bubble Sort
void bubble(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

// Insertion Sort
void insertion(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Recursive Bubble Sort
void Rec_Bubble(int arr[], int n) {
    if (n <= 1) return;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    Rec_Bubble(arr, n - 1);
}

// Recursive Insertion Sort
void Rec_Insertion(vector<int> &arr, int n) {
    if (n <= 1) return;

    Rec_Insertion(arr, n - 1);

    int key = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}

// Merge Sort
void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left++]);
    }
    while (right <= high) {
        temp.push_back(arr[right++]);
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void MergeSort(vector<int>& arr) {
    mergeSort(arr, 0, arr.size() - 1);
}

// Quick Sort
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        qs(arr, low, pi - 1);
        qs(arr, pi + 1, high);
    }
}

vector<int> QuickSort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}

// Main Function
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Create copies of the original array to sort with different algorithms
    vector<int> arr1 = arr;
    vector<int> arr2 = arr;
    vector<int> arr3 = arr;
    vector<int> arr4 = arr;
    vector<int> arr5 = arr;
    vector<int> arr6 = arr;
    vector<int> arr7 = arr;

    // Sort arrays using different algorithms
    selection(arr1.data(), n);
    bubble(arr2.data(), n);
    insertion(arr3.data(), n);
    Rec_Bubble(arr4.data(), n);
    Rec_Insertion(arr5, n);
    MergeSort(arr6);
    vector<int> sortedQuick = QuickSort(arr7);

    // Print sorted arrays
    cout << "Selection Sort: ";
    for (const auto& num : arr1) cout << num << " ";
    cout << endl;

    cout << "Bubble Sort: ";
    for (const auto& num : arr2) cout << num << " ";
    cout << endl;

    cout << "Insertion Sort: ";
    for (const auto& num : arr3) cout << num << " ";
    cout << endl;

    cout << "Recursive Bubble: ";
    for (const auto& num : arr4) cout << num << " ";
    cout << endl;

    cout << "Recursive Insertion: ";
    for (const auto& num : arr5) cout << num << " ";
    cout << endl;

    cout << "Merge Sort: ";
    for (const auto& num : arr6) cout << num << " ";
    cout << endl;

    cout << "Quick Sort: ";
    for (const auto& num : sortedQuick) cout << num << " ";
    cout << endl;

    return 0;
}
