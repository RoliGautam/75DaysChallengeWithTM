//function using sort stl 
    vector<int> sortedSquares(vector<int>& arr) {
        int n = arr.size();
        //create a temprary vector to store the square of array elements
        vector<int>temp;
        for(int i = 0; i<n; i++){
            //push the square into temp
            temp.push_back(arr[i]*arr[i]);
        }
        //sort the temp vector
        sort(temp.begin(), temp.end());
        //copy temp vector into our original vector arr
        arr = temp;
        //return arr
        return arr;
        
    }
//Time complexity: 0(nlog(n))

//without sort stl
    vector<int> sortedSquares(vector<int>& arr) {
        int n = arr.size();
        vector<int>temp;
        int l = 0;
        int r = n-1;
        while(l<=r){
            if(arr[l]*arr[l]>arr[r]*arr[r]){
                temp.push_back(arr[l]*arr[l]);
                l++;
            }else{
                temp.push_back(arr[r]*arr[r]);
                r--;
            }
        }
        reverse(temp.begin(), temp.end());
        arr = temp;
        return arr;
    }
//Time complexity: 0(n)
