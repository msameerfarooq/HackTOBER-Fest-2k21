#include<iostream>
using namespace std;

class decBin{
    int decNum, size;
    int binNum[10];
    
    public:
    decBin(){
        decNum = 0;
    }
    void input(){
        cout<<"Enter decimal number : ";
        cin>>decNum;

        cout<<"\nDecimal number : "<<decNum;
    }

    void convert(){
        cout<<"\nConverting to binary...";
        int i=0;
        while(decNum>0)
        {
            binNum[i] = decNum%2;
            decNum = (decNum/2);
            i++;
        }
        size = i-1;
        cout<<"\nDone!";
    }

    void getfet(){
        cout<<"\nBinary number : ";
        for(int j=size;j>=0;j--){
            cout<<binNum[j];
        }
    }
    ~decBin(){
        cout<<"\nDestructing object\n\n";
    }
};

int main(){
    system("cls");

    decBin db;
    db.input();
    db.convert();
    db.getfet();
    
    return 0;
}
