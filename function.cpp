// #include <iostream>
// using namespace std;
// //fuction definition
// void printHello(){
//     cout << "hello"; 

//   } 
//    int main(){
//     // function call /invoke
//    cout << printHello() << endl;

    
//   }  
#include <iostream>
using namespace std;
int sum(int a, int b){
    int s = a + b;
    return s;
}
int mul(int c, int d){
    int z = c*d;
    return z;
}
int minOfTwo(int a, int b){
    if(a<b){
        return a;
    }
        else{
            return b;
        }
    }
// using for loop print sum 
int sumN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum=sum + i;
    }
    return sum;
}
int factN(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*n;
    } 
    return fact;
}

int sumn(int a, int b) {
    a = a+ 5; //15
    b = b + 4; //24
    return a+b; //39
}

int changeX(int x){
    x = 2*x;
    cout << "X= " << x << endl;

}


int main() {
 //   cout << sum(10,5) << endl;
 //   cout << mul(20,10)  << endl; 
 //   cout << " Mininum of two is= "<< minOfTwo(4,2) << endl;
 //   cout << sumN(3) << endl;
 //   cout << factN(3 ) << endl;
 //     cout << "sum: " << sumn(5,10) <<endl;
 //     int x = 10 , y= 20;
 //     cout << sumn(x,y) <<endl;
 //     cout << x << endl;
 //     cout << y << endl;

  //      int x = 5;
  //      changeX(x);
  //      cout << "X = " << x << endl;

    return 0;
    //cout << "sum: " << sumn(5,10) <<endl;  // this will not print because it is printed after the return statement
}