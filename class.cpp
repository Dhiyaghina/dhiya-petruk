#include<iostream>
#include<string>

using namespace std;

class Mahasiswa{
    // access specifier
    private:
        // atribut
        string nama, npm;

        void nyapa(){
            cout << "haloo";
        }        

    public:
        // constructor default
        Mahasiswa(){
            this->nama="ghina";
            this->npm="2217051068";
        }

        Mahasiswa(string name, string npm){
            this->nama=name;
            this->npm=npm;
        }
        
    int main(){
    	    // Class
    // object
     Mahasiswa mhs;
     mhs.nilai();
     mhs.setNama("john");
     cout << endl << mhs.getNama() << endl;
     mhs.setNpm("2117051024");
     cout << mhs.getNpm();
        
     //Class
     //object
     

//class Mahasiswa{
//	public:
//		string nama;
//		string NPM;
//};
//
//int main(string ghina,string NPM){
//	Mahasiswa data1;
//	data1.nama="ghina";
//	data1.NPM="2217051068";
//	data1.jurusan="Ilmu Komputer";
//	data1.ipk="3";
//	Mahasiswa data2;
//	data2.nama="hasri";
//	data1.NPM="2217051318";
//	data1.jurusan="Ilmu Komputer";
//	data1.ipk="4 "
//	
//	cout<<"biodata mahasiswa 1: "<<data1.nama<<data1.NPM<<endl;
//	cout<<"nama dari data1: "<<data1.nama<<endl;
//	cout<<"nama dari data1: "<<data1.nama<<endl;
//	return 0;
};

