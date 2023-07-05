#include<iostream>
using namespace std;

int main(){
    int Row,column;

    cout<<" Input number of Rows and Columns"<<endl;
    cin>>Row>>column;
    for(int i=1;i<=Row;i++){
        for(int j=1;j<=column;j++){
            if(i==1 || i==Row || j==1 || j==column)
            {
                cout<<"*";
            
    
            }
            else{
                cout<<" ";
            }
        }
       
        cout<<endl;

    }
    return 0;
}