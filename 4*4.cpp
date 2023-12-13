#include <iostream>
using namespace std;

int main(){

    int array[4];
    int userNum;
    
    cout<<"\nEnter the number: "; cin>>userNum;
    int sum=0;

    while (sum!=userNum){ 
        sum=0;
    for (int i=0; i<4; i++){
     array[i]=  ( rand() % userNum);
    }

     for (int i=0; i<4; i++){
      sum += array[i];
    }

    }
    int a,b,c,d;
    a=array[0]; b=array[1]; c=array[2]; d=array[3];

    int arr4[4][4];

    //assigning the a,b,c,d position in magic square to align with rules
    arr4[0][0]=a; arr4[0][1]=b; arr4[0][2]=c; arr4[0][3]=d; //row 1
    arr4[1][0]=d; arr4[1][1]=c; arr4[1][2]=b; arr4[1][3]=a; //row 2
    arr4[2][0]=b; arr4[2][1]=a; arr4[2][2]=d; arr4[2][3]=c; //row 3
    arr4[3][0]=c; arr4[3][1]=d; arr4[3][2]=a; arr4[3][3]=b; //row 4

    //printing array
    int sumNum=0;
    cout<<endl;
     for (int i=0; i<4; i++){
        sumNum=0;
        cout<<endl<<"\t";
        for (int m=0; m<4; m++){
            cout<<arr4[i][m]<<"   ";
            sumNum += arr4[i][m];
        }
        cout<<"  "<<sumNum<<endl;
        
    }
    cout<<endl<<endl;
    cout<<"   "<<sumNum<<"   "<<userNum<<"  "<<userNum<<"  "<<userNum<<"  "<<userNum<<"     "<<userNum<<endl;
}