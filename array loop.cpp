#include<iostream>
using namespace std;
int main(){
 // Array
    // array n Loop
     int myNum[9] = {1,2,3,4,5,6,7,8,9};

     for(int i = 0; i < 9; i++){
         cout << myNum[i] << " ";
     }  

     int jumlh = sizeof(myNum)/sizeof(int);

     cout << jumlh << endl; 

     for(int i = 0; i < jumlh; i++){
         cout << myNum[i] << " ";
    }

     //for each;
     for (int x : myNum){
	 
         cout << x << " ";
    }
}
