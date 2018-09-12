#include <iostream>
using namespace std;
struct nodo {
	int valor;
	struct nodo *ptr;
};
int main(){
	struct nodo *inicio;
	struct nodo *nodo1;
	
	nodo1= new struct nodo;
	inicio=nodo1;
	inicio->ptr=NULL;
	inicio->valor=10;
	cout<< "imprimir: " <<inicio->valor;
	cout<< endl;
	nodo1=new struct nodo;
	inicio->ptr=nodo1;
	inicio->ptr->ptr=NULL;
	inicio->ptr->valor=20;
	cout <<"Imprimir: "<< inicio->ptr->valor;
	cout<< endl;
	nodo1=new struct nodo;
	inicio->ptr->ptr=nodo1;
	inicio->ptr->ptr->ptr=NULL;
	inicio->ptr->valor=30;
	cout <<"Imprimir: "<< inicio->ptr->valor;
	
	return 0;
}
