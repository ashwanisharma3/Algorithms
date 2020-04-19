// Sieve is used to find the prime numbers.

vector<int> findPrimes (int n) {

        vector<int> v;
        if(n < 2)
            return v;

        int i, j, arr[n] = {0};

        arr[2] = 1;

        for(i = 3; i < n; i = i + 2)
            arr[i] = 1;
        
        for(i = 3; i * i < n; i = i + 2) {
            if (arr[i]){
                for (j = i * i; j < n ; j = j + i)
                    arr[j] = 0;
            }
        }

        for (i = 2; i < n; i++) {
            // cout<<arr[i] <<" "; 
            (arr[i]) ? v.push_back(i) : 0;
        }
        
        return v;
}