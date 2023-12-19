#include <iostream>
using namespace std;

int main(){
    int userNum;
    int array[3][3];
    bool check = false;
    while (!check)
    { 
    cout<<"Enter the number (Divisible by 3): "; cin>>userNum;
    cout<<endl;

        if (userNum%3==0)
        {
            check = true;
        }
        else
        {
            cout<<"Error!!!!\nPlease enter a number divisible by 3\n"<<endl;
        }

    }
    if (userNum<15)
    {
        int num = userNum/3;
        for (int i=0; i<3; i++){

        for (int m=0; m<3; m++){
            array[i][m] = num;
        }
    }

    }

    if (userNum>=15)
    { 
    int middle = userNum/3;
    int left, top, right, bottom,a,b,c,d;

    a = middle + 3 ; b = middle - 3;
     c = middle + 1; d = middle - 1;

    left =  userNum -(a + b) ;
    top = userNum - (a + c) ;
    right = userNum -(b + c);
    bottom = userNum - (b + d);

    
    array[0][0]= a; array[0][1]=top; array[0][2]=c; //row 1
    array[1][0]=left; array[1][1]=middle; array[1][2]=right; //row 2
    array[2][0]=d; array[2][1]=bottom; array[2][2]=b; //row 3

    } //if statement closed for userNum>=15

    //printing array
    for (int i=0; i<3; i++){

        for (int m=0; m<3; m++){
            cout<<array[i][m]<<" ";
        }
        cout<<endl;
    }

}