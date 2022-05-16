#include<iostream>
#include<Windows.h>
using namespace std;
string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int total = 0;
void enter(){
	int ch = 0;
	HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(w, 10);
	cout << "\t\t=================================================" << endl;
	cout << "\t\t>>>>>HOW MANY MEDICINES DO YOU WANT TO ENTER<<<<<" << endl;
	cout << "\t\t=================================================" << endl;
	HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(d, 7);
	cin >> ch;
	if (total == 0){
		total = ch + total;
		for (int i = 0; i < ch; i++){
			HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(w, 10);
			cout << "\t\t\t====================================" << endl;
			cout << "\t\t\t  ENTER INFORMATION ABOUT MEDICINE  " << endl;
			cout << "\t\t\t====================================" << endl;
			HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(d, 4);
			cout << "ENTER NAME: " << endl;
			HANDLE F = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(F, 7);
			cin >> arr1[i];
			HANDLE R = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(R, 4);
			cout << "ENTER LICENSE NO:" << endl;
			HANDLE T = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(T, 7);
			cin >> arr2[i];
			HANDLE Y = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(Y, 4);
			cout << "ENTER PRICE:" << endl;
			HANDLE U = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(U, 7);
			cin >> arr3[i];
			HANDLE I = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(I, 4);
			cout << "ENTER MANUFACTURING DATE: " << endl;
			HANDLE O = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(O, 7);
			cin >> arr4[i];
			HANDLE P = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(P, 4);
			cout << "ENTER EXPIREY DATE: " << endl;
			HANDLE A = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(A, 7);
			cin >> arr5[i];
		}
	}
	else{
		for (int i = total; i < ch + total; i++)		{
			HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(w, 10);
			cout << "\t\t\t====================================" << endl;
			cout << "\t\t\t  ENTER INFORMATION ABOUT MEDICINE  " << endl;
			cout << "\t\t\t====================================" << endl;
			HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(d, 4);
			cout << "ENTER NAME: " << endl;
			HANDLE F = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(F, 7);
			cin >> arr1[i];
			HANDLE R = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(R, 4);
			cout << "ENTER LICENSE NO:" << endl;
			HANDLE T = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(T, 7);
			cin >> arr2[i];
			HANDLE Y = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(Y, 4);
			cout << "ENTER PRICE:" << endl;
			HANDLE U = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(U, 7);
			cin >> arr3[i];
			HANDLE I = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(I, 4);
			cout << "ENTER MANUFACTURING DATE: " << endl;
			HANDLE O = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(O, 7);
			cin >> arr4[i];
			HANDLE P = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(P, 4);
			cout << "ENTER EXPIREY DATE: " << endl;
			HANDLE A = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(A, 7);
			cin >> arr5[i];
		}
		total = ch + total;
	}
}
void show()
{
	if (total == 0){
		HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(d, 4);
		cout << "\t\t<<<<<<<<<<   ERROR! NO DATA FOUND   >>>>>>>>>>" << endl;
		HANDLE W = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(W, 7);
	}
	else 
	{
		HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(w, 10);
		cout << "\t\t\t============================================= " << endl;
		cout << "\t\t\t<<<<<<<<<INFORMATION ABOUT MEDICINE>>>>>>>>>> " << endl;
		cout << "\t\t\t============================================= " << endl;
		HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(d, 7);
		HANDLE m = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(m, 10);
		cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;
		HANDLE g = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(g, 9);
		cout << "NAME            |         LICENSE NO    |             PRICE             |        MANUFACTURING DATE      |        EXPIRY DATE" << endl;
		HANDLE s = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(s, 10);
		cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;
		for (int i = 0; i < total; i++)	
		{
			HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(w, 4);
			cout << "MEDICINE NO:" << i + 1 << endl;
			HANDLE v = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(v, 7);
			cout << arr1[i] << "\t\t|\t\t" << arr2[i] << "      |\t\t" << arr3[i] << "\t\t|\t\t" << arr4[i] << "\t\t |\t\t" << arr5[i] << endl;
			cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;
		}
	}
}
void search(){
	if (total == 0){
		HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(d, 4);
		cout << "\t\t<<<<<<<<<<   ERROR! NO DATA FOUND   >>>>>>>>>>" << endl;
		HANDLE W = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(W, 7);
	}
	else {
		HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(w, 10);
		string licenseno;
		cout << "\t\t\t====================================" << endl;
		cout << "\t\t\t  ENTER THE LICENSE NO OF MEDICINE  " << endl;
		cout << "\t\t\t====================================" << endl;
		HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(d, 7);
		cin >> licenseno;
		for (int i = 0; i < total; i++){
			if (licenseno == arr2[i]){
				cout << "NAME: " << arr1[i] << endl;
				cout << "lICENSE NO:" << arr2[i] << endl;
				cout << "PRICE: " << arr3[i] << endl;
				cout << "MANUFACTURING DATE:" << arr4[i] << endl;
				cout << "EXPIRY DATE: " << arr5[i] << endl;
			}
			else {
				HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(d, 4);
				cout << "\t\t<<<<<<<<<<   ERROR! NO DATA FOUND   >>>>>>>>>>" << endl;
				HANDLE W = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(W, 7);
			}
		}
	}
}
void update(){
	if (total == 0){
		HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(d, 4);
		cout << "\t\t<<<<<<<<<<   ERROR! NO DATA IS ENTERED   >>>>>>>>>>" << endl;
		HANDLE W = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(W, 7);
	}
	else {
		HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(w, 10);
		string licenseno;
		cout << "\t\t-------------------------------------------------------" << endl;
		cout << "\t\t  ENTER THE LICENSE NO OF MEDICINE YOU WANT TO UPDATE  " << endl;
		cout << "\t\t-------------------------------------------------------" << endl;
		HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(d, 7);
		cin >> licenseno;
		for (int i = 0; i < total; i++){
			if (licenseno == arr2[i]){
				HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(w, 10);
				cout << "\t\t\t------------------------" << endl;
				cout << "\t\t\t  PREVIOUS INFORMATION  " << endl;
				cout << "\t\t\t------------------------" << endl << endl << endl;
				HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(d, 9);
				cout << "\t\t<<<<<<<<<<   INFORMATION ABOUT MEDICINE   >>>>>>>>>> " << endl;
				HANDLE f = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(f, 7);
				cout << "NAME :" << arr1[i] << endl;
				cout << "LICENSE NO:" << arr2[i] << endl;
				cout << "PRICE: " << arr3[i] << endl;
				cout << "MANUFACTURING DATE: " << arr4[i] << endl;
				cout << "EXPIRY DATE:" << arr5[i] << endl << endl;
				HANDLE k = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(k, 9);
				cout << "\t\t<<<<<<<<<<   ENTER NEW INFORMATION  >>>>>>>>>>" << endl << endl;
				HANDLE l = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(l, 4);
				cout << "ENTER NAME: " << endl;
				HANDLE F = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(F, 7);
				cin >> arr1[i];
				HANDLE R = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(R, 4);
				cout << "ENTER LICENSE NO:" << endl;
				HANDLE T = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(T, 7);
				cin >> arr2[i];
				HANDLE Y = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(Y, 4);
				cout << "ENTER PRICE:" << endl;
				HANDLE U = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(U, 7);
				cin >> arr3[i];
				HANDLE I = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(I, 4);
				cout << "ENTER MANUFACTURING DATE: " << endl;
				HANDLE O = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(O, 7);
				cin >> arr4[i];
				HANDLE P = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(P, 4);
				cout << "ENTER EXPIREY DATE: " << endl;
				HANDLE A = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(A, 7);
				cin >> arr5[i];
			}
			else	{
				HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(d, 4);
				cout << "\t\t<<<<<<<<<<   ERROR! NO DATA FOUND   >>>>>>>>>>" << endl;
				HANDLE W = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(W, 7);
			}
		}
	}
}
void deleterecord(){
	if (total == 0){
		HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(d, 4);
		cout << "\t\t<<<<<<<<<<   ERROR! NO DATA FOUND   >>>>>>>>>>" << endl;
		HANDLE W = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(W, 7);
	}
	else {
		int a;
		HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(d, 4);
		cout << "\t\t\t   PRESS 1 TO DELETE ALL RECORD  " << endl;
		cout << "\t\t\tPRESS 2 TO DELETE SPECIFIC RECORD" << endl;
		HANDLE W = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(W, 7);
		cin >> a;
		if (a == 1){
			total = 0;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 4);
			cout << "\t\t<<<<<<<<<<<   ALL RECORD IS DELETED   >>>>>>>>>>>>>>>>>" << endl;
			HANDLE g = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 7);
		}
		else if (a == 2){
			string licenseno;
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 9);
			cout << "\t<<<<<<<<<<   ENTER THE LICENSE NO OF THE MEDICINE YOU WANT TO DELETE   >>>>>>>>>>" << endl;
			HANDLE g = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 7);
			cin >> licenseno;
			for (int i = 0; i < total; i++){
				if (licenseno == arr2[i]){
					for (int j = i; j < total; j++){
						arr1[j] = arr1[j + 1];
						arr2[j] = arr2[j + 1];
						arr3[j] = arr3[j + 1];
						arr4[j] = arr4[j + 1];
						arr5[j] = arr5[j + 1];
					}
					total--;
					HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(d, 4);
					cout << "\t\t<<<<<<<<<<YOUR REQUIRED DATA IS DELETED>>>>>>>>>>" << endl;
					HANDLE W = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(W, 7);
				}
				else{
					HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(d, 4);
					cout << "\t\t<<<<<<<<<<   ERROR! INVALID INPUT   >>>>>>>>>>" << endl;
					HANDLE W = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleTextAttribute(W, 7);
				}
			}
		}
		else{
			HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(d, 4);
			cout << "\t\t<<<<<<<<<<   ERROR! INVALID INPUT   >>>>>>>>>>" << endl;
			HANDLE W = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(W, 7);
		}
	}
}
int exit(){
	HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(d, 4);
	cout << "\t\t\t====================" << endl;
	cout << "\t\t\t   PROGRAM ENDED    " << endl;
	cout << "\t\t\t====================" << endl;
	HANDLE W = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(W, 7);
	return 0;
}
int main(){
	int value;
	while (true){
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << endl << endl << endl;
		cout << "\t\t        MEDICINE MANAGEMENT SYSTEM OF PHARMACY        \n";
		HANDLE g = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 7);
		cout << "\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
		cout << "\t\t>>>>>>>>>>>>>>>  1- ENTER DATA     <<<<<<<<<<<<<<<<<<<\n";
		cout << "\t\t>>>>>>>>>>>>>>>  2- SHOW DATA      <<<<<<<<<<<<<<<<<<<\n";
		cout << "\t\t>>>>>>>>>>>>>>>  3- SEARCH DATA    <<<<<<<<<<<<<<<<<<<\n";
		cout << "\t\t>>>>>>>>>>>>>>>  4- UPDATE DATA    <<<<<<<<<<<<<<<<<<<\n";
		cout << "\t\t>>>>>>>>>>>>>>>  5- DELETE DATA    <<<<<<<<<<<<<<<<<<<\n";
		cout << "\t\t>>>>>>>>>>>>>>>  6- QUIT           <<<<<<<<<<<<<<<<<<<\n";
		cout << "\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
		HANDLE w = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 9);
		cout << "\t\t>>>>>>>>>>>>> TAKE CHOICE FROM ABOVE <<<<<<<<<<<<<<<<<\n" << endl;
		HANDLE x = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 7);
		cin >> value;
		switch (value){
		case 1:
			enter();
			break;
		case 2:
			show();
			break;
		case 3:
			search();
			break;
		case 4:
			update();
			break;
		case 5:
			deleterecord();
			break;
		case 6:
			exit();
			return 0;
			break;
		default:
			HANDLE d = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(d, 4);
			cout << "\t\t\t\t<<<<<<<<<<  ERROR! INVALID INPUT   >>>>>>>>>>" << endl;
			HANDLE W = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(W, 7);
			break;
		}
	}
}

