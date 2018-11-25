#include<stdio.h>
int MAXSIZE= 8;
int pila[8];
int top=-1;

void cambio();
int estaVacia();
int estaLlena();
int contar();
int pop();
int push();
int nuevo,viejo;
//verificar si esta vacia

int estaVacia(){
  if (top == -1)
  return 1;
  else 
  return 0;
}
//verificar si esta llena
int estaLlena(){
  if (top==MAXSIZE)
  return 1;
  else 
  return 0;
}	

int contar(){
	return pila[top];
	}
	
		
int pop(){
	int datos;
	if (!estaVacia())
	{    
		//Hacemos el cambio del valor viejo por el nuevo
		int cm=pila[top];
		if (cm==viejo)
		{
			pila[top]=nuevo;
		}
		
		datos=pila[top];
		top=top-1;
		return datos;
	}else{
		printf("\tpila esta vacia\n");
		}
	}


	
	int push(int datos){
		if (!estaLlena())
		{
			top=top+1;
			pila[top]=datos;
		}else{
			printf("\tpila esta llena\n");
			}
		}	



	int main(void){
	//Hacemos push a la pila 	
	push(8);
	push(3);
	push(6);
	push(5);
	push(9);
	push(1);
	push(12);
	push(15);	

	printf("\nIngrese su valor nuevo :\n");
	scanf("%d",&nuevo);
	printf("\nIngrese su valor viejo :\n");
	scanf("%d",&viejo);
	printf("\n\tElementos dentro la pila :%d\n",contar());
	printf("Elementos: \n");
	//Imprimimos los elementos en el orden ingresados
	
	while (!estaVacia())
	{
   int datos=pop();
   printf("%d\n",datos);		
	}
      printf("\nPila llena: %s\n" , estaLlena()?"true":"false");
	  printf("Pila vacia: %s\n" , estaVacia()?"true":"false");

		}

