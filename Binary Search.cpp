// Binary Search using while loop
// the algorithm here returns the index where the target element is found.
int binarySearch (vector<int> v, int target) {
        int mid, start = 0, end = v.size() - 1;

        while (start <= end) {
                mid = start + (end - start) / 2;

                if (v[mid] == target) {
                        break;
                } else if (v[mid] < target) {
                        end = mid - 1;
                } else {
                        start = mid + 1;
                }
        }

        return mid;
}

// Using recursion
int binarySearch (vector<int> v, int start, int end, int target) {
        if (start > end) {
                return -1;
        }

        int mid = start + (end - start) / 2;

        if (v[mid] == target) {
                return mid;
        } else if (v[mid] < target) {
                binarySearch (v, start, mid - 1, target);
        } else {
                binarySearch (v, mid + 1, end, target);
        }

        return -1;
}
