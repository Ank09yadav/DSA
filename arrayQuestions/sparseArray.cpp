// #defaining sparse array 
#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter the dimention of sparse metrix :";
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter the element of sparse metrix :\n";
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>arr[i][j];
    
    int sparse[row*col][3];
    int counter=0;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++){
            if(arr[i][j]!=0){
                sparse[counter][0]=i;
                sparse[counter][1]=j;
                sparse[counter][2]=arr[i][j];
                counter++;
            }    
        }
    cout<<"Sparse Matrix :\n";
    for(int i=0;i<counter;i++){
        cout<<sparse[i][0]<<" "<<sparse[i][1]<<" "<<sparse[i][2]<<endl;
    }
    return 0;
}
