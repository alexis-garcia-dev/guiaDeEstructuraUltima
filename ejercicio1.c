#include<stdio.h>
#include<stdlib.h>
struct nodo{
	int info;
	struct nodo *sig;
	
	}; struct nodo *raiz=NULL; 
	//funcion para insertar 
	void insertar(int x){
		struct nodo *nuevo;
		nuevo = malloc(sizeof(struct nodo));
		nuevo->info=x;
		if(raiz==NULL){
			raiz=nuevo;
			nuevo->sig=NULL;
			
			}else{
				nuevo->sig=raiz;
				raiz=nuevo;
				
				}
		
		
		}
		//funcion para imprimir
		void imprimir(){
			struct nodo *reco=raiz;
			printf("Lista completa.\n");
			while(reco!=NULL){
				printf("%i",reco->info);
				reco=reco->sig;
				
				
				}
				printf("\n");
			
			
			}
			int extraer(){
				
				if (raiz!=NULL)
				{
					int informacion=raiz->info;
					struct nodo *bor=raiz;
					raiz = raiz->sig;
					free(bor);
					return informacion;
				}else{
					return -1;
					
					}
				
				}
				void liberar(){
					struct nodo *reco= raiz;
					struct nodo *bor;
					while (reco!=NULL)
					{
						bor=reco;
						reco=reco->sig;
						free(bor);
					}
					
					
					
					}
					
					
					int cantidad(){
						struct nodo *reco = raiz;
						int cant =0;
						while (reco!=NULL)
						{
							cant++;
							reco=reco->sig;
						}
						return cant;
						
						
						
						}
						//verificamos si esta vacia o no
						int vacia(){
							if (raiz==NULL)
							{
								printf("  :(esta vacia:\n");
								return 1;
								
								
							}
							else
							{
									printf(":) No esta vacia:\n");
								return 0;
							
							}
							
							
							}
					



int main(){
insertar(20);
insertar(80);
insertar(6);
imprimir();
printf("Extraemos de la pila :%i\n",extraer());

vacia();

printf(" Cantidad:%i\n",cantidad());


imprimir();
liberar();
return 0;
	
	}
