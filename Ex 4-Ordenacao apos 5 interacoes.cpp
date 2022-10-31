#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp, auxB=0, auxI=0, auxS=0;
   int aB[10] = { 41,94,43,63,60,61,38,47,59,52};
   int aI[10] = { 41,94,43,63,60,61,38,47,59,52};
   int aS[10] = { 41,94,43,63,60,61,38,47,59,52};
   cout <<"Lista aleatoria:\n";
   for(i = 0; i<10; i++) { 
      cout <<aB[i]<<"\t";
   }
cout<<endl;
cout <<"\n--------------------------------------------------------------------------------------\n";

//Bubble Sort
for(int b = 0; b<5; b++) {  
   for(j = b+1; j<5; j++) 
   {
      if(aB[j] < aB[b]) {
         temp = aB[b];
         aB[b] = aB[j];
         aB[j] = temp;
      }
      
   }
auxB ++;
}

//Insertion Sort - 5 interação não é visível
for(int k=0; k<5 ;k++)  {  
        int temp = aI[k];  
        int l= k-1;             
        while(l>=0 && temp <= aI[l])  
        {  
            aI[l+1] = aI[l];   
            l = l-1;
			auxI ++;                    
        }  
        
        aI[l+1] = temp;    
		          
} 

//Selection Sort
    int m, aux2;

    for(int n=0;n<6-1;n++){
        m=n;
        for(int o=n+1 ; o<10 ; o++){
            if(aS[m] > aS[o])
                m=o;
            
        }
        if(n!=m){
            aux2=aS[n];
            aS[n]=aS[m];
            aS[m]=aux2;
            
        }
        auxS ++;
        
    }
 
cout <<"\nLista apos 5 interacoes Bubble Sort:\n";
for(i = 0; i<10; i++) { 
   cout <<aB[i]<<"\t";
}
cout <<"\n\nQuantidade de trocas realizadas:\n";
	cout <<auxB<<endl;
cout <<"\n--------------------------------------------------------------------------------------\n";
cout <<"\nLista apos 5 interacoes Insertion Sort:\n";
for(i = 0; i<10; i++) { 
   cout <<aI[i]<<"\t";
}
cout <<"\n\nQuantidade de trocas realizadas:\n";
	cout <<auxI<<endl;
cout <<"\n--------------------------------------------------------------------------------------\n";
cout <<"\nLista apos 5 interacoes Selection Sort:\n";
for(i = 0; i<10; i++) { 
   cout <<aS[i]<<"\t";
}
cout <<"\n\nQuantidade de trocas realizadas:\n";
	cout <<auxS<<endl;
return 0;
}

