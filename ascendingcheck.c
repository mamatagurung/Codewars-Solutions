// Are the numbers in order?
// In this Kata, your function receives an array of integers as input. Your task is to determine whether the numbers are in ascending order. An array is said to be in ascending order if there are no two adjacent integers where the left integer exceeds the right integer in value.

// For the purposes of this Kata, you may assume that all inputs are valid, i.e. non-empty arrays containing only integers.

// Note that an array of 1 integer is automatically considered to be sorted in ascending order since all (zero) adjacent pairs of integers satisfy the condition that the left integer does not exceed the right integer in value. An empty list is considered a degenerate case and therefore will not be tested in this Kata - feel free to raise an Issue if you see such a list being tested.

// For example:

// in_asc_order({1,2,4,7,19}, 5); // returns true
// in_asc_order({1,2,3,4,5}, 5); // returns true
// in_asc_order({1,6,10,18,2,4,20}, 7); // returns false
// in_asc_order({9,8,7,6,5,4,3,2,1}, 9); // returns false because the numbers are in DESCENDING order
// N.B. If your solution passes all fixed tests but fails at the random tests, make sure you aren't mutating the input array.
#include <stddef.h>
#include <stdbool.h>

bool in_asc_order( int arr[], int n) {

//Code please
 int i;
  for(i=0;i<n-1;i++){
      if(arr[i]>arr[i+1])
        return false;
}

  return true;
  }