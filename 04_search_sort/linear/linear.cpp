#include <iostream>
using namespace std;

int search(int arr[], int n, int x, int result[]){
    int a = 0;
    for (int i = 0; i <= n; i++){
        if (arr[i] == x){
            result[a] = i;
            a++;
        }
    }
    return a;
}

int main(){
    int m[10] = {10, 11, 12, 12, 13, 14, 15, 16, 17, 18}; 
    const int arrsize = sizeof(m) / sizeof(m[0]);
    int result[arrsize];
    for (int i = 0; i < arrsize; ++i){
        result[i] = 0;
    }
    cout << "Count: " << search(m, arrsize, 12, result) << endl << "id: " << endl; 
    for (int i = 0; i < arrsize; ++i){
        if (result[i] != 0){
            cout << result[i] << endl;
        }
    }
}
