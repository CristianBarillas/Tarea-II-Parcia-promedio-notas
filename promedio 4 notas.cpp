#include <iostream>

using namespace std;

float N1,N2,N3,N4,N5,P;
string Notas;
int main()
	

	
{
	cout<<"INGRESE EL NOMBRE DEL ESTUDIANTE"<<endl;
getline(cin,Notas);
cout<<"\n"<<endl;
cout<<"INGRESE LA NOTA DE METODOLOGIA";
cin>>N1;
cout<<"\n"<<endl;
cout<<"INGRESE LA NOTA DE CONTABILIDAD";
cin>>N2;
cout<<"\n"<<endl;
cout<<"INGRESE LA NOTA DE LOGICA";
cin>>N3;
cout<<"\n"<<endl;
cout<<"INGRESE LA NOTA DE CIENCIAS";
cin>>N4;
cout<<"\n"<<endl;
cout<<"INGRESE LA NOTA DE FISICA";
cin>>N5;
cout<<"\n"<<endl;
P=(N1+N2+N3+N4+N5)/5;
	if(P>=61) {
		cout<<"FELICIDADES:"<<Notas<<endl;
		cout<<"APROBASTE CON UN PROMEDIO DE:"<<P<<endl;
	}
	else{
		cout<<"LO SIENTO ESTIMADO:"<<Notas<<endl;
		cout<<"REPROBASTE EL CURSO:"<<P<<endl;
	}
}
		
	
