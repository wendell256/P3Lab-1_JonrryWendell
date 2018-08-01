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
  double a=0,b=0,c=0,ladoa=0,ladob=0,ladoc=0,hip=0,a_pot=0,b_pot=0,c_pot=0,pitagoras=0;
  
  cout<<"ingrese la longitud del lado a: "<<endl;
  cin>>a;
  while(a<1){
    cout<<"Valor no valido. Ingrese longitud de nuevo:";
    cin>>a;
  };
  
  cout<<"ingrese la longitud del lado b: "<<endl;
  cin>>b;
  while(b<1){
    cout<<"Valor no valido. Ingrese longitud de nuevo:";
    cin>>b;
  };
  
  cout<<"ingrese la longitud del lado c: "<<endl;
  cin>>c;
  while(c<1){
    cout<<"Valor no valido. Ingrese longitud de nuevo:";
    cin>>c;
  };
  hip =fmax(a,b);
  hip = fmax(hip, c);
  cout<<"hip:"<<hip<<endl;  
  if(hip == a){
    ladoa = c;
    ladoc = hip;
    ladob = b; 
  }else if(hip == ladob){
    ladob = ladoc;
    ladoc = hip;
    ladoa = a;
  }
  cout<<"ladoa: "<<ladoa<<endl;
  cout<<"ladob: "<<ladob<<endl;
  cout<<"ladoc: "<<ladoc<<endl;
  //c²=a²+b² para todo triangulo rectangulo
  c_pot = pow(ladoc,2);
  a_pot = pow(ladoa,2);
  b_pot = pow(ladob,2);
  pitagoras = a_pot + b_pot;
  cout<<"apot: "<<a_pot<<endl;
  cout<<"bpot: "<<b_pot<<endl;
  cout<<"cpot: "<<c_pot<<endl;
  /*α=arccos[(a²-b²-c²)/(-2bc)]
    β=arccos[(b²-a²-c²)/(-2ac)]
    γ=arccos[(c²-a²-b²)/(-2ac)]
  */
  //c = hip_pot
  double alpha = (acos((a_pot - b_pot - c_pot)/(-2*ladob*ladoc)))*(180/M_PI);
  double beta  = (acos((b_pot - a_pot - c_pot)/(-2*ladoa*ladoc)))*(180/M_PI);  
  double gamma = (acos((c_pot - a_pot - b_pot)/(-2*ladoa*ladoc)))*(180/M_PI);

  /*Area = sqrt[s(s-a)(s-b)(s-c)]
    s = (a+b+c)/2*/
  double Sarea = (ladoa + ladob + ladoc)/2;
  double area = sqrt(Sarea*(Sarea - ladoa)*(Sarea - ladob)*(Sarea - ladoc));
 
  if(c_pot == pitagoras){
    cout<<"El triangulo es un triangulo rectangulo."<<endl;
  }else{
    cout<<"El triangulo no es un triangulo rectangulo."<<endl;
  }//fin if de ver si es triangulo rectangulo
  cout<<"angulo  α = "<<  alpha <<"°"<<endl;
  cout<<"angulo  β = "<<  beta <<"°"<<endl;
  cout<<"angulo γ = "<< gamma <<"°"<<endl;
  cout<<"Area = "<<area<<endl;
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





