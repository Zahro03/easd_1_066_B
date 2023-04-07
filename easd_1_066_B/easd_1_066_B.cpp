#include <iostream>
using namespace std;

// fungsi untuk menggabungkan dua array
void merge(int arr[], int left, int mid, int right) 
{
	int n1 = mid - left + 1;
	int n2 = right - mid;

	int L[1], R[2];

	for (int i = 0; i < n1; i++)
		L[i] = arr[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[mid + 1 + j];

	int i = 0, j = 0, k = left;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

// fungsi rekursif untuk mengimplementasikan Merge sort 
void mergeSort(int arr[], int left, int right)
{
	if (left < right) {

		int mid = left + (right - left) / 2;

		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);

		merge(arr, left, mid, right);
	}
}

// fungsi untuk mencetak array 
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// program utama 
int main() 
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Array sebelum diurutkan: \n";
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	cout << "\nArray setelah diurutkan: \n";
	printArray(arr, arr_size);
	return 0;
}

//Karena algoritma adalah langkah-langkah yang terstruktur dan terurut dengan jelas yang direncanakan
//Struktur data linier dan data non-linier
//Jumlah operasi dalam algorithm,bentuk dan kompleksitas,Pengguna struktur data,besar input,kinerja mesin dan optimisasi kode.
//Karena saya tidak memiliki kecenderungan didalam memilih algoritma sorting mana yang mudah dipahami dan diimplementasikan untuk mengurutkan data yang besar.
// Quadratic : selection sort,insertion sort,bubble sort dan quick sort. Logliniear : merge sort,quick sort,heap sort,counting sort dan radix sort.

#include <iostream>
using namespace std;

// fungsi untuk menggabungkan dua array
void merge(int arr[], int left, int mid, int right)
{
	int n1 = mid - left + 1;
	int n2 = right - mid;

	int L[1], R[2];

	for (int i = 0; i < n1; i++)
		L[i] = arr[left + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[mid + 1 + j];

	int i = 0, j = 0, k = left;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

// fungsi rekursif untuk mengimplementasikan Merge sort
void mergeSort(int arr[], int left, int right)
{
	if (left < right) {

		int mid = left + (right - left) / 2;

		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);

		merge(arr, left, mid, right);
	}
}

// fungsi untuk mencetak array
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// program utama
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Array sebelum diurutkan: \n";
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	cout << "\nArray setelah diurutkan: \n";
	printArray(arr, arr_size);
	return 0;
}