// --- while loop -----
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     int count= 1;
//     while(count <= n ){ // while checks till the condition is true
//         cout << count << " " ;
//         count++;
//     }

//     return 0;
// }

/*#include <iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    while(i <= n){
        cout << i;
        i++;
    }
    return 0;
}*/

// --- using while and if else print the sum of the even numbers  -----
#include <iostream>
using namespace std;
int main(){
    int n =10;
    int evenSum;
    int i=0;
    while(i <= n ){
        
        cout << i << "   ";
        i=i+2;
    }
        if(i % 2 == 0){
            cout<<"\nNumbers are  even\n";
            cout << "Sum of the number= "; 
        evenSum = i + 2 ;
        cout << evenSum ;
    }
    else{
        cout<<"Number is odd";
    }

    return 0;

}
