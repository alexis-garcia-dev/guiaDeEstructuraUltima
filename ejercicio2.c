#include<stdio.h>
//variables
int MAXSIZE= 8;
int pila[8];
int top=-1;
int *pil=pila;
int cambioPila[8];
//asemos el cambio

void cambio();
int estaVacia();
int estaLlena();
int contar();
int pop();
int pop2();
int push();
//verificamos si esta vacia

int estaVacia(){
  if (top == -1)
  return 1;
  else 
  return 0;
}
//verficamos si esta llena

int estaLlena(){
  if (top==MAXSIZE)
  return 1;
  else 
  return 0;
}	

int contar(){
	return pila[top];
	}
	
//metodo para invertir los numeros de la pila	
void cambio(){
	
	if (!estaVacia())
	{   
		int i;
	    int j=0;
		 for (i = (MAXSIZE-1) ; i >=0  ; i--)
	  {   
		int cam =pil[i];
		cambioPila[j]= cam;
		
	     }
	     
	  }
	}
	
	
		
int pop(){
	int datos;
	if (!estaVacia())
	{    
		
		datos=pila[top];
		cambioPila[top]=datos;
		top=top-1;
		return datos;
	}else{
		printf("\tLa pila esta vacia\n");
		}
	}


	
	int push(int datos){
		if (!estaLlena())
		{
			top=top+1;
			pila[top]=datos;
		}else{
			printf("\tLa pila esta llena\n");
			}
		}	



	int main(void){
	//Hacemos push a la pila 	
	push(3);
	push(5);
	push(9);
	push(1);
	push(12);
	push(15);	
	printf("\tElementos detro la pila :%d\n",contar());
	printf("Elementos: \n");
	//Imprimimos los elementos en el orden ingresados
	
	while (!estaVacia())
	{
   int datos=pop();
   printf("%d\n",datos);		
	}
	//Imprimimos los elementos invertidos
	  printf("\nElementos invertidos :\n");
	  
	 int i;
	   
	 for (i = 0 ; i < MAXSIZE  ; i++)
	  {   
		  if (cambioPila[i]==0)
		  {
			  break;
		  }else{
		  
		printf("\n%d",cambioPila[i]);
		    }
		}
		
		    
	  printf("\nPila llena: %s\n" , estaLlena()?"true":"false");
	  printf("Pila vacia: %s\n" , estaVacia()?"true":"false");

		}



