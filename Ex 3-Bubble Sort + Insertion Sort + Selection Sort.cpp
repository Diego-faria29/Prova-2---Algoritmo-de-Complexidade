#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp, auxB=0, auxI=0, auxS=0;
   int aB[10] = { 64,63,21,84,2,12,33,55,6,43};
   int aI[10] = { 64,63,21,84,2,12,33,55,6,43};
   int aS[10] = { 64,63,21,84,2,12,33,55,6,43};
   cout <<"Lista de matriculas:\n";
   for(i = 0; i<10; i++) { 
      cout <<aB[i]<<"\t";
   }
cout<<endl;
cout <<"\n--------------------------------------------------------------------------------------\n";
//Bubble Sort
for(int b = 0; b<10; b++) {  
   for(j = b+1; j<10; j++) 
   {
      if(aB[j] < aB[b]) {
         temp = aB[b];
         aB[b] = aB[j];
         aB[j] = temp;
         auxB ++;
      }
   }

}

//Insertion Sort
for(int k=1; k<10 ;k++)  {  
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

    for(int n=0;n<10-1;n++){
        m=n;
        for(int o=n+1 ; o<10 ; o++){
            if(aS[m] > aS[o])
                m=o;
            
        }
        if(n!=m){
            aux2=aS[n];
            aS[n]=aS[m];
            aS[m]=aux2;
            auxS ++;
        }
        
    }
 
cout <<"\nLista de matriculas ordenada Bubble Sort:\n";
for(i = 0; i<10; i++) { 
   cout <<aB[i]<<"\t";
}
cout <<"\n\nQuantidade de trocas realizadas:\n";
	cout <<auxB<<endl;
cout <<"\n--------------------------------------------------------------------------------------\n";
cout <<"\nLista de matriculas ordenada Insertion Sort:\n";
for(i = 0; i<10; i++) { 
   cout <<aI[i]<<"\t";
}
cout <<"\n\nQuantidade de trocas realizadas:\n";
	cout <<auxI<<endl;
cout <<"\n--------------------------------------------------------------------------------------\n";
cout <<"\nLista de matriculas ordenada Selection Sort:\n";
for(i = 0; i<10; i++) { 
   cout <<aS[i]<<"\t";
}
cout <<"\n\nQuantidade de trocas realizadas:\n";
	cout <<auxS<<endl;
return 0;
}

