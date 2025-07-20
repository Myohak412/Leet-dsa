 /* right angle pattern*/
 /* #include <iostream>
 using namespace std;
 int main() {
    int num = 5;
    for(int i=0 ; i < num; i++){
        for(int j=0 ; j <i+1 ;j++){
        cout << " * ";
        }
        cout << endl;
    }
 } */

/* #include <iostream>
 using namespace std;
 int main(){
    int n = 6 ;
    for(int i=1; i <= n; i++){
        for(int j=1; j <= i+1 ; j++){
            cout << "  *  " ;
        }
        cout << endl;
    }
 } */

// -------- triangle pattern with numbers------

 /* #include <iostream>
 using namespace std;
 int main(){
   // int n = 4;
    for(int i = 0; i < 7 ; i++){
        for(int j = 1; j < i+1 ; j++){
        cout << j  ;
        }
        cout << endl;
    }
 }*/
 
 //--------triangle pattern with numbers as mirror image to above(inwards)

 #include <iostream>
 using namespace std;
 int main (){
    int n=5;
    for(int i=n; i < n; i++){
        for (int j=1; j< i+1; j++){
        cout << j ;
    }
    cout << endl ;
    }
 }
 

