#include<bits/stdc++.h>
using namespace std;
string Espacio(string frase);
int main(){
	string frase;
	cout<<"Ingrese una frase:"<<endl;
	getline(cin,frase);
	string e=Espacio(frase);
	cout<<"La frase con espacios es:"<<e;
	return 0;
}
string Espacio(string frase){
	string espacio;
	int i=0;
	while(i<=frase.size()){
		if(frase[i]==' '){
			frase[i]='_';
		}
		espacio+=frase[i];
		i++;
	}
	return espacio;
}