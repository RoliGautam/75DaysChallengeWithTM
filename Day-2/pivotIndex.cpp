//function for getting pivot index  

int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        //initially calculate the total sum
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += arr[i];
        }
        //initially take left sum as 0, and right sum as total sum(for the first index)
        int lsum = 0;
        int rsum = sum;
    
        for(int i = 0; i<n; i++){
            //before comparing, subtract the current element from the right sum, because current element will be considered as pivot element
            rsum = rsum-arr[i];
            if(lsum == rsum){
                return i;
            }
            //before going for next element, add the current element into left sum
            lsum = lsum+arr[i];
        }
        //if there is no pivot element, return -1
        return -1;
    }

//as we are just using one traversal, so Time complexity will be : 0(n)
