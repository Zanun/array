#include <iostream>
using namespace std;

int main()
{
	int a;
	int nilai[a]={};
	int kuis;
	int tot=0;
	int rata;
	
	cout << "====================================" << endl;
	cout << "Nama Anda : Adzanun Muhammad Furqon" << endl;
	cout << "NIM Anda : 18.83.0252" << endl;
	
	cout << "\nBerapa kali kuis : ";
	cin >> a;
	for (kuis=1; kuis<=a; kuis++)
	{
		cout << "nilai kuis ke-" << kuis << " : ";
		cin >> nilai[kuis-1];
	}
	
	cout << "\n======================" << endl;
	cout << "Hasil Rekap Nilai : " << endl;
	cout << "======================" << endl;
	for (kuis=1; kuis<=a; kuis++)
	{
		cout << "nilai kuis ke-"<< kuis << " : " << nilai[kuis-1] << endl;
		tot = tot+nilai[kuis-1];
		rata = tot/a; 
	}
	
	cout << "---------------------------"<<endl;
	cout << "nilai total : " << tot << endl;
	cout << "nilai rata-rata : "<< rata << endl;
}
