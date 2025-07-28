#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findSecondLargestSorted(vector<int>& arr) {
    sort(arr.begin(), arr.end(), greater<int>()); 

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[0]){
          return arr[i];
        }        
    }
    return -1;  
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++){
      cin >> arr[i];
    }
        
    cout << findSecondLargestSorted(arr) << endl;
    return 0;
}
