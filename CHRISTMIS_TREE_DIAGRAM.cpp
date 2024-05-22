#include <iostream>
using namespace std;
int main () {
        int rows;
        cout<<"ENTER NUMBER OF ROWS : ";
        cin>>rows;
        for(int i=1;i<=rows;i++) {
            for(int j=1;j<=(rows-i);j++) {
                cout<<"  ";
            }
            for(int j=1; j<=(2*i-1);j++) {
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=1;i<=3;i++) {
        for(int k=1;k<=(rows-2);k++){
            cout<<"  ";
        }
        for(int k=1;k<=3;k++) {
            cout<<"* ";
        }
        cout<<endl;
        }
        return 0;
}