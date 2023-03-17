#include <iostream>
using namespace std;

int binarySearch(int arr[], int i, int r, int x) 
{
   while (i <= r) 
   {
      int m = i + (r - i) / 2;
      
      if (arr[m] == x) return m;
      
      if (arr[m] < x) i = m + 1;
      
      else r = m - 1;
   }
   
   return -1; 
}

int main() 
{
   int n, x;
   cout << "Masukkan jumlah array: ";
   cin >> n;

   int arr[n];
   cout << "\nMasukkan elemen dalam array secara berurutan: ";
   for (int i = 0; i < n; i++) 
   {
      cin >> arr[i];
   }

   cout << "Elemen yang dicari: ";
   cin >> x;

   int result = binarySearch(arr, 0, n - 1, x);

   if (result == -1) 
   {
      cout << "Elemen yang dicari tidak ditemukan" << endl;
   } else {
      cout << "Elemen yang dicari ditemukan di indeks ke-" << result << endl;
   }
   
   return 0;
}
