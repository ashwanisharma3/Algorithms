// Selection sort used the concept of the finding the minimum element of the array
// and bringing it to the start and building the sorted array from start.

void insertionSort (vector<int> &v) {
        int i, j, len = v.size();

        for (i = 0; i < len - 1; i++) {
                int minVal = v[i];
                int index = i;
                for (j = i + 1; j < len; j--) {
                        if (v[j] < minVal) {
                                minVal = v[j];
                                index = j;
                        }
                }
                swap (v[i], v[minVal]);
        }
}