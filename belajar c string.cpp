#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char nama[]="ghina";
	char prodi[]="ilkom";
	char npm[]="22170510";
	cout<<nama<<endl;

		//hitung jumlah variabelnya
//	cout<<strlen(nama)<<endl; //strlen agar karakter null tidak dibaca
//
//	cout<<prodi<<endl;
//	
//	cout<<sizeof(prodi)<<endl; //sizeof karakter null dibaca
//	cout<<endl;
		
		//mengeluarkan huruf satu satu
//	for (int i=0;i<strlen(nama);i++){
//		cout<<nama[i]<<" "<<(nama[i]=='\0'?"Null":"Not Null")<<endl;
//	}
//	cout<<endl;
//	for (int i=0;i<sizeof(prodi);i++){
//		cout<<prodi[i]<<" "<<(prodi[i]=='\0'?"Null":"Not Null")<<endl;
//	}
		
		//masukin langsung per huruf
//	char str[]={'i','l','k','o','m','\0'};
//	cout<<str<<endl;
//	cout<<strlen(str)<<endl;
//	char nama[6];
//	char npm[10];
//	cin.get(nama,6);
//	cin.ignore();
//	cin.get(npm,10);

		//ganti huruf a jadi x	
//	cout<<"nama : " <<nama<<endl;
//	cout<<"npm : "<<npm<<endl;
//	char karakter;
//		while (cin.get(karakter)){
//			if(karakter == 'a')
//			cin.putback('x');
//			else
//				cout<<karakter;
//			
//		}
//}
//	
		//gabungin gname dan lname
	char fname[50] = "dhiya";
	char lname[50]= " ghina";
	char *fullname = strcat(fname, lname);//strcat untuk menyatukan char atau string
	cout<<fullname;

		//mengubah variabel str1 menjadi long
//	char* endptr;
//	char str1[] = "011ghina";
//	long value1 = strtol(str1, &endptr, 2);//mengubag variabel str1 menhjadi long
//	cout<<value1<<endl;
//	cout<<endptr<<endl;//endptr untuk memisahkan angka dengan huruf
//}

		//mengubah str2 menjadi unsigned long
//	char str2[] = "110ghina";
//	unsigned long value2 = strtoul(str2, &endptr, 8);//mengubah str2 menjadi unsigned long
//	cout<<value2<<endl;
//	cout<<endptr<<endl;

		// mengubah str3 menjadi double
//	char str3[] = "1ghina";
//	double value3 = strtod(str3, &endptr);// mengubah str3 menjadi double
//	cout<<value3<<endl;
//	cout<<endptr<<endl;
	
//	char data[2][100]={"2217imran",
//					   "2257hamid"};
//	char* endptr;
//	for(int i=0;i<2;i++){
//		long value = strtod(data[i], &endptr);
//		cout<<"nama : "<<endptr<<endl;
//		cout<<"npm : "<<value<<endl;
//		cout<<endl;
//	}
//}
