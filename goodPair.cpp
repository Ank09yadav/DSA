#include <iostream>
using namespace std;
int main(){
    int arr[]={2,5,5,7,73,2,7,5,6},goodpair[10][10],k=0;
    int lenth= sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<=lenth;i++){
        for(int j=i+1;j<lenth;j++){
            if(( arr[i]==arr[j]) && (i<j)){
                goodpair[k][0] = arr[i]; 
                goodpair[k][1] = arr[j];
                k++;
            }
        }
    }
    cout << "{";
    for (int i = 0; i < k; i++) {
    cout << "(" << goodpair[i][0] << "," << goodpair[i][1] << ")";
        if (i < k - 1) {
        cout << ", ";
        }
    }
    cout << "}";
}