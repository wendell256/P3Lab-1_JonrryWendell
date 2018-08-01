#include <iostream>
#include <cmath>

using namespace std;

//funcion que imprime el menu
int menu(){
  int opcion1=1;
  
  cout<<"***LABORATORIO UNO***"<<endl<<"1) Ejercicio 1"<<endl<<"2) Ejercicio 2"<<endl<<"3) Ejercicio 3"
      <<endl<<"4)Salir"<<endl<<"Ingrese una opcion:"<<endl;
  cin>>opcion1;
  while(opcion1<1 || opcion1>4){
    cout<<"Error valor no valido. Ingrese opcion:"<<endl;
    cin>>opcion1;
  }//fin while verificar rango
  return opcion1;
}
//fin funcion que imprime el menu


//funcion que realiza el ejercicio uno
void ejercicio1(){
  int veces=0,start=1;
  cout<<"Ingrese la cantidad de cubos que desea imprimir:"<<endl;
  cin>>veces;
  while(veces<0){
    cout<<"Error, cantidad no valida. Ingrese la cantidad de cubos a imprimir:"<<endl;
    cin>>veces;
  }//fin while ver si es valido
  if(veces == 0){
    cout<<"0³ = 0"<<endl;
  } 
  for(int i=1;i<=veces;i++){
    int resultado = 0;
    cout<<i<<"³ = ";
    for(int j=i;j>=1;j--){
      resultado+=start;
      if(j==1){
        cout<<start<<" = ";
      }
      else{
        cout<<start<<" + ";
      }//fin if-else para imprimir correctamente
      start+=2;
    }//fin for interior
    cout<<resultado<<endl;
    
  }//fin for exterior
}
//fin funcion que realiza el ejercicio uno


//funcion que realiza el ejercicio dos
void ejercicio2(){

}
//fin funcion que realiza el ejercicio dos


//funcion que realiza el ejercicio tres
void ejercicio3(){

} 
//fin funcion que realiza el ejercicio tres



int main(){
  char resp1='y';
  
  while(resp1=='y' || resp1=='Y'){
    int seleccion = menu();
    switch(seleccion){
      case 1:
        ejercicio1();
      break;
      case 2:
        ejercicio2();  
      break;
      case 3:
        ejercicio3();
      break;
      case 4:
        cout<<"Que tengas un buen dia!"<<endl;
      break;
    }//fin switch de seleccion
    
    cout<<"Desea reinciar el programa?y/n"<<endl;
    cin>>resp1;
    while(resp1 != 'y' && resp1 != 'Y' && resp1 != 'N' && resp1 != 'n'){
      cout<<"Error, valor no valido. Reiniciar?y/n"<<endl;
      cin>>resp1;  
    }//fin while verificar respuesta
  }//fin while repetir programa


return 0;
}





