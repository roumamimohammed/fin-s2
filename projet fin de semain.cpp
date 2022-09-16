#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>


typedef struct date {int jour, mois, annee;} T_date;

    typedef struct personne {
      char nom[30];
	 char  prenom[30];
      T_date date_naissance;       
    } T_personne;
    
    
int main()
{	int n,i,j,S;
  int age;
	T_personne tmp;
	printf("entrer le nombres des personnes:");
	scanf("%d",&n);
	T_personne T[n];
	
   for(i=0;i<n;i++){
    	printf("saisie le nom du personne%d: ",i+1);
    	fflush(stdin);
    	gets(T[i].nom);
   		printf("saisie le prenom:");
   		fflush(stdin);
    	gets(T[i].prenom);
   		printf("saisie la date de naissance:\n");
   		printf("lannee:");
   		scanf("%d",&T[i].date_naissance.annee);
   		printf("le mois:");
   		scanf("%d",&T[i].date_naissance.mois);
   		printf("le jour:");
   		scanf("%d",&T[i].date_naissance.jour);
   	   age=2022-T[i].date_naissance.annee;
   	}
   		for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
   		if(T[j].date_naissance.annee!=T[i].date_naissance.annee){
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(T[j].date_naissance.annee<T[i].date_naissance.annee){
		    	tmp=T[i];
		    	T[i]=T[j];
			    T[j]=tmp;
			}}}
				}
				
				else if(T[j].date_naissance.annee==T[i].date_naissance.annee){
					for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(T[j].date_naissance.mois<T[i].date_naissance.mois){
		    	tmp=T[i];
		    	T[i]=T[j];
			    T[j]=tmp;
			}	}}}
				
			
		else{
			for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(T[j].date_naissance.jour<T[i].date_naissance.jour){
		    	tmp=T[i];
		    	T[i]=T[j];
			    T[j]=tmp;
		    	}
		    	}}}
			}
			}
		
			
   	printf("le mineur %s\n",T[n-1].nom);
   	printf("le plus age %s",T[0].nom);
   
   	
   	
}
