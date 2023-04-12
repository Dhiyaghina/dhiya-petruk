#include<iostream>
using namespace std;
//prosedur
//void siswa(){
//	string nama = "ghina";
	
//fungsi
//string aku(){
//	string nama = "Dhiya";
//	double npm= "068";
//	return();
//}
//
//int main(){
//	cout<< aku();
//	cout<<npm();
//}

//bikin program tambahan
int main(){
	char lanjut;
	while(true){
		cout<<"kamu kangen aku (y/t)?";
		cin>> lanjut;
		
		if (lanjut=='y'){
			cout<<"huhu miss you too "<<endl;
			break;
		}else if(lanjut=='t'){
			cout<<"ihh kok ga kangen sih";
			break;
		}else{
			cout<<"Harus jawabbbb!!";
		}
	} return 0;
}

