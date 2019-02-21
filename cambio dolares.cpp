#include<iostream>
//Definimos la función fuera de main
float cambio(float dolares){
      float respuesta;
      respuesta=(dolares*0.86);
      return(respuesta);
}
int main(){
       char salir;
       float dolares;
       std::cout<<"Dime unos dolares: ";
       std::cin>>dolares;
       std::cout<<"Tiene uste: "<<cambio(dolares)<<"euros";
       std::cout<<"\nToque algo para salir";
       std::cin>>salir;

	return 0;
}
