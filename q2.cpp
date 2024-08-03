#include<iostream>
#include<vector>
using namespace std;

int main(){
int rows,cols;
cout<<"Enter rows:"<<endl;
cin>>rows;
cout<<"Enter cols:"<<endl;
cin>>cols;
vector<vector<int>>matrix(rows,vector<int>(cols));
vector<vector<int>>transpose(cols,vector<int>(rows));

cout<<"Enter matrix data"<<endl;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cin>>matrix[i][j];
    }
}
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        transpose[j][i]=matrix[i][j];
    }
}
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}

