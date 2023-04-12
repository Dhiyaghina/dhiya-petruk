#include<iostream>
using namespace std;
int main(){
//new&delete
int *a;

a= new int;
*a=50;
cout<<a<<" "<<*a<<endl;

delete a;

cout<<*a;
}

//int main(){
//	int tambah(int a, int b){
//		return a+b;
//	}
//	int kurang(int a,int b){
//		return a-b;
//		
//	}
//	int main (){
//		int a,b;
//		
//		cin>>a>>b;
//		
//		int (*ptr[]) (int,int) = {tambah,kurang};
//		for(int i=0;i<2;i++){
//		cout<< (*ptr[i])(5,4)<<endl;
//		}
//	}
//}

//	int arr[3]={10,20,30};
//	int *ptr = arr;
//	
//	for(int i=0;i<3; i++){
//		cout<<"nilai arraay ["<< i <<"] = "<<*ptr<<endl;
//		ptr++;
//	}
//}

//	int a=5;
	//pointer
//	int *b=&a;
	
	//null pointer
//	int *b = nullptr;
//	b=&a;
//	
//	cout<<"nilai dari a: "<<a<<endl;
//	cout<<"alamat dari a: "<<b<<endl;
//	
//	//dereferensi atau mengambi data dari pointer
//	a=10
//	cout<<"mengambil nilai dari pointer b: "<<*b<<endl;
//	
//	return 0;
//}
