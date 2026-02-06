#include<iostream>
using namespace std;

int main(){
    int columnSize[]={2,3,1,2,};
    int* jagged[4];

    for(int i=0;i<4;i++)
        jagged[i] = new int[columnSize[i]];
    
    cout<<"Enter a number ";
    for(int i=0; i<4;i++){
        for(int j=0;j<columnSize[i];j++ ){
           cin>>jagged[i][j];
        }
    }

    for(int i=0; i<4;i++){
        for(int j=0;j<columnSize[i];j++ ){
            cout<<jagged[i]<<endl;
        }
    }

    cout<<"Element of the jagged Array :";
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < columnSize[i]; j++) {
            cout << jagged[i][j] << " ";
        }
        cout << endl;
    }
    //Free memory 
    for(int i = 0; i < 4; i++) {
        delete[] jagged[i];
    }
    return 0;

}