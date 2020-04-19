// Insertion sort uses the concept of the sorting the array from the start.
// We start sorting the array from the start and place the element at the appropriate index,
// and the array is sorted at the beginning.

void insertionSort (vector<int> v) {
        int i, j, len = v.size();

        for (i = 1; i < len; i++) {
                j = i;

                int key = v[i];
                while (j >= 0 && key < v[j - 1]) {
                        v[j] = v[j - 1];
                        j--;
                }
                v[j] = key;
        }
}