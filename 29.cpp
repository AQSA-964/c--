#include<iostream>
#include <conio.h>

using namespace std;

int main()
{
	int first, second, third, fourth;
	int n=0;
	char again='X';
	
	
	cout<<" HERE WE CAN CHANGE ORDINARY NO. INTO ROMAN NO." <<endl;
	
	while(again =='X' || again=='x')
	{
		
	cout<<"\n\nENTER THE YEAR = ";
	cin>>first;
	cin>>second;
	cin>>third;
	cin>>fourth;
	
	
	while(n!=first)
          {
          	
	         	cout<<"M";
		        n++;
		        
	       }
	       
	       
	for(int i=1; i<=10; i++)
	
	{
		if(second == 0)
	         	{
	         		
		        	cout<<"";
			        break;
			        
		         }
		else if(second == 1)
		        {
		        	
			         cout<<"C";
			        break;
			        
	           	}
		else if(second == 2)
		        {
		        	
		            	cout<<"CC";
		            	break;
		            	
		        }
		else if(second == 3)
	         	{
	         		
		            	cout<<"CCC";
		            	break;
	
		       }
		else if(second == 4)  
		        {
		        	
		            	cout<<"CD";
		            	break;
		            	
	         	}
		else if(second == 5)
		        {
		        	
		            	cout<<"D";
		             	break;
	        
			    }
		else if(second == 6) 
		        {
		        	
			            cout<<"DC";
		                break;
		                
		        }
		else if(second == 7)
		        { 
		        
		             	cout<<"DCC";
			             break;
		         
				 }
		else if(second == 8)  
		        {
		        	
			             cout<<"DCCC";
			             break;
			             
		        }
		else  
		{  
		
			              cout<<"CM";
		                	break;
			
		}
	
	}
	for(int i=1; i<=10; i++)
	{
		if(third == 0)
		{
			
			cout<<"";
			break;
			
		}
			if(third == 1)
		{
			
			cout<<"X";
			break;
			
		}
			if(third == 2)
		{
			
			cout<<"XX";
			break;
			
		}
			if(third == 3)
		{
			
			cout<<"XXX";
			break;
			
		}
			if(third == 4)
		{
			
			cout<<"XL";
			break;
			
		}
			if(third == 5)
		{
				
			cout<<"L";
			break;
			
		}
			if(third == 6)
		{
			
			cout<<"LX";
			break;
			
		}
			if(third == 7)
		{
			
			cout<<"LXX";
			break;
			
		}
			if(third == 8)
		{
			
			cout<<"LXXX";
			break;
			
		}
			if(third == 9) 
		{
			
			cout<<"XC";
			break;
			
		}
		
		
	}
		
	for(int i=1; i<=10; i++)
	{
		if(fourth == 0)
		{
			
			cout<<"";
			break;
			
		}
			if(fourth == 1)
		{
			
			cout<<"i";
			break;
			
		}
			if(fourth == 2)
		{
			
			cout<<"ii";
			break;
			
		}
			if(fourth == 3)
		{
			
			cout<<"iii";
			break;
			
		}
			if(fourth == 4)
		{
			
			cout<<"iV";
			break;
			
		}
			if(fourth == 5)
		{
			
			cout<<"V";
			break;
			
		}
			if(fourth == 6)
		{
			
			cout<<"Vi";
			break;
			
		}
			if(fourth == 7)
		{
			
			cout<<"Vii";
			break;
			
		}
			if(fourth == 8)
		{
			
			cout<<"Viii";
			break;
			
		}
			if(fourth == 9)
		{
			
			cout<<"iX";
			break;
			
		}
	}

	cout<<"\n \nDO YOU WANT TO CONVERT ANOTHER YEAR, TYPE Y  = ";
	cin>> again ;
	n=0;
	
	
}
cout<< " THE END ";
	
   return 0;
}
