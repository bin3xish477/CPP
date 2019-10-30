#include <iostream>


int* bubbleSort(int* arr, size_t size) {
  bool swapped = true;
  int pass = 1;
  while (swapped && (pass < size)) {
    swapped = false;
    for (int index = 0; index < size - pass; index++) {
      if (arr[index] > arr[index+1]) 
        std::swap(arr[index], arr[index+1]);
        swapped = true;
    }
    pass++;
  }
  return arr;
}


void printArray(int* arr, size_t size) {
  for (int i = 0; i < size; ++i) {
    std::cout << arr[i] << std::endl;
  }
}


int main() {
  std::cout << "Hello World!\n";
  int SIZE = 5;
  int* numb = new int[SIZE];

  int unsorted_arr[] = {5,2,4,1,3};

  int* sorted_array = new int[SIZE]; 
  sorted_array = bubbleSort(unsorted_arr, SIZE);

  printArray(sorted_array, SIZE);
  return 0;
}
