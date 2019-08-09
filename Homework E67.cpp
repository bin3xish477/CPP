#include <iostream>

using namespace std;
	
void reverse_array_order(int array[], int size) {
//swaps the order last 4 letters for the first 4 letters. 
    int replace;

    for(int i = 0; i < size / 2; i++) {
        replace = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = replace; 
    }
}

void display_reversed_array(int *array, int size) {
//prints the reversed order of the array.
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}

int main()
{
	int array[] = {1,4,9,16,9,7,4,9,11};

	reverse_array_order(array, 9);
	display_reversed_array(array, 9);
	return 0;
}
