// #include <iostream>
// using  namespace std;
// int main(){
//     int n = 10;
//     for(int i = 0; i<=n; i=i+2){
//         cout << i << " ";
//     }
//     return 0;

// }
// for(initialisation;condition;updation)
//for(int i= 1; i<=n; i++)


// ---sum of 6 numbers ----------
// 

// -----sum of odd numbers ------
 /* #include <iostream>
using  namespace std;
int main(){
    int n = 50 ;  
    int sum = 1;
    for (int i; i <=n ; i=i+2){
        cout << i << " ";
    sum += i;
     
    }
    cout  << "\n\nSum of odd numbers is:  " << sum << endl;
    return 0;

} */
 #include <iostream>
 using namespace std;
 int main(){
    int n = 10; //print odd numbers
    
    for(int i=1 ; i <= n; i=i+2){
        cout << i << " ";
        if (i%2!=0){
            cout << "Numbers is odd" << "\n" << endl;
        }
        else{
            cout << "Number is even";
        }
    }
  return 0;
 }