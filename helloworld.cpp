#include <bits/stdc++.h>
using namespace std;
/*
// Function to perform binary search
int binary_search(int A[], int n, int x) {
    int left, right, mid;
    left = 0;
    right = n - 1;
    while(left <= right) {
        mid = (left + right) / 2;
        if(A[mid] == x) {
            return mid;
        }
        if(A[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Element not found
}
*/

int main() {
   int n,i;
 scanf("%d",&n);
 int arr[n];
 double sum=0.0;
 for(i=0; i<n; i++){
  scanf("%d",&arr[i]);
  sum += arr[i];
 }
 double result = sum/(n*100);
 printf("%.12lf",result*100); 
    /*
    // Example array of sorted integers
    int A[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(A) / sizeof(A[0]);

    // Element to search for
    int x = 12;

    // Call binary_search function to find x in the array
    int result = binary_search(A, n, x);

    // Check the result and display a message
    if (result != -1) {
        printf("Element %d found at index %d\n", x, result);
    } else {
        printf("Element %d not found in the array\n", x);
    }
*/
    return 0;
}
