#include <iostream>
using namespace std;

int main(){
    // int n =5;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout << j ;
    //     }
    //     cout << endl;
    // }
    // int n =5;

    // for(int i=0; i<n; i++){
    //     char ch= 'A';
    //     for(int j=0; j<n; j++){
    //         cout << ch;
    //         ch +=1;
    //     }
    //     cout << endl;
    // }
//     int n=3;
//   char ch = 'A';
//     for(int i=0; i<n; i++){
      
//         for(int j=0; j<n; j++){
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }

// int n =4;

// for(int i=0; i<n; i++){
//     for(int j=0; j<=i; j++){
//         cout <<"*";
//     }
//     cout <<endl;
// }

// 

// }
// int n=4;

// for(int i=0; i<n; i++){
//     for(int j=0; j<i+1; j++){
//         cout << i+1;
//     }
//     cout<< endl;
// }

// int n =4;
// for(int i=0; i<n; i++){
//     for(int j=1; j<=i+1; j++){
//         cout << j;

//     }
//     cout << endl;
// }

        // int n=4;
        // char ch ='A';
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j>0; j--){
        //         cout << ch << ' ';
        //         ch++;
        //     }
        //     cout << endl;
        // }
            

        //   int n=4;
        // for(int i=0; i<n; i++){
        //     char ch ='A';
        //     for(int j=i+1; j>0; j--){
        //         cout << ch << ' ';
        //         ch++;
        //     }
        //     cout << endl;
        // }

       int n=4;
        char ch ='A';

       for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j=0; j<n-i; j++){
            cout << ch;
            ch++;
        }
        cout << endl;

       }


 return 0;
}