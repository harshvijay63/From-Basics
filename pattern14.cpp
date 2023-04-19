#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int row = 1; row <= n; row++){
        //space
        for(int col = 1; col <=n-row; col++){
            cout << "  ";
        }

        //left tri
        int col;
        
        for(col = 1; col <=row ; col++){
            char ch = col + 'A' - 1;
            cout << ch << " ";
        }

        int new_col = col-2;
        //right tri
        for(; new_col<row; new_col--){
            if(new_col == 0)
                break;
            char ch = new_col + 'A' - 1;
            cout << ch << " ";
        }

        cout << endl;
    }


    return 0;
}