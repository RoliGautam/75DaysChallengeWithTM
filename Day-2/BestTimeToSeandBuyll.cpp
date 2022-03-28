    int maxProfit(vector<int>& arr) {
      //if there are no element then return 0
        if(arr.size() == 0){
            return 0;
        }
      //initialize profit as 0
        int profit = 0;
        int n = arr.size()-1;
      //traverse the array till second last element(coz we are comparing second last element with the first element)
        for(int i = 0; i<n; i++){
            if(arr[i+1]>arr[i]){
                profit += (arr[i+1]-arr[i]);
            }
        }
        return profit;
    }
//Time Complexity:0(n)
