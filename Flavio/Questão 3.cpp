#include <iostream>

using namespace std;

int main()
{
	int dec1,dec2;
	string bin,soma;
	
	cout << "Digite um numero: ";
	cin >> dec1;
	
	 while(dec1 > 0)
	 {  
          
            if(dec1%2==0)
			{
                bin = "0"; 
				cout << bin;
			
            }   
            else
			{
                bin = "1";
				cout << bin; 
				 
            }      
            dec1 /= 2;  
     } 
	 
	cout << "\nDigite um numero: ";
	cin >> dec2;
	
	 while(dec2 > 0)
	 {  
          
            if(dec2%2==0)
			{
                bin = "0"; 
				cout << bin;
			
            }   
            else
			{
                bin = "1";
				cout << bin; 
				 
            }      
            dec2 /= 2;  
     } 
	 
	soma = bin + bin; 
	cout << "\nA soma binaria e': " << soma;   
    
}
