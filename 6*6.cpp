#include <iostream>
using namespace std;

int main(){

    int userNum;
    cout<<"Enter the number: "; cin>>userNum;
    cout<<endl;

    int array[6];
    int sum=0;
    while (sum!=userNum)
    {
        sum=0;
        for (int i=0; i<6; i++)
        {
            array[i] = rand()%userNum;
            sum+=array[i];
        }
    }
    int a,b,c,d,e,f;
    a = array[0]; b = array[1]; c = array[2]; d = array[3]; e = array[4]; f = array[5];

    int array2D[6][6];

    array2D[0][0] = b; array2D[0][1] = f; array2D[0][2] = a; array2D[0][3] = e; array2D[0][4] = d; array2D[0][5] = c;
    array2D[1][0] = e; array2D[1][1] = c; array2D[1][2] = d; array2D[1][3] = f; array2D[1][4] = b; array2D[1][5] = a;
    array2D[2][0] = a; array2D[2][1] = b; array2D[2][2] = f; array2D[2][3] = d; array2D[2][4] = c; array2D[2][5] = e;
    array2D[3][0] = c; array2D[3][1] = d; array2D[3][2] = e; array2D[3][3] = a; array2D[3][4] = f; array2D[3][5] = b;
    array2D[4][0] = d; array2D[4][1] = a; array2D[4][2] = b; array2D[4][3] = c; array2D[4][4] = e; array2D[4][5] = f;
    array2D[5][0] = f; array2D[5][1] = e; array2D[5][2] = c; array2D[5][3] = b; array2D[5][4] = a; array2D[5][5] = d;

    //printing array
    for (int i=0; i<6; i++){

        for (int m=0; m<6; m++){
            cout<<array2D[i][m]<<"  ";
        }
        cout<<endl;
    }


}