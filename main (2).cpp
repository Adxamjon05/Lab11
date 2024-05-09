#include <iostream>
using namespace std;

const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize,
                 int columnIndex){
    int sum=0;
    for(int i=0; i<rowSize; i++){
        sum+=m[i][columnIndex];
    }
    return sum;
}


int main() {

     int rowSize;
    cin>>rowSize;
    double m[rowSize][SIZE];
    for (int i=0; i<rowSize; i++){
        for(int k=0; k<SIZE; k++){
            cin>>m[i][k];
        }
    }
    cout<<"sum of column 0= "<<sumColumn(m, rowSize, 0)<<endl;
    cout<<"sum of column 1= "<<sumColumn(m, rowSize, 1)<<endl;
    cout<<"sum of column 2= "<<sumColumn(m, rowSize, 2)<<endl;
    cout<<"sum of column 3= "<<sumColumn(m, rowSize, 3)<<endl;



    return 0;
}
