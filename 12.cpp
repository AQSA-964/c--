#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int hours, min, time_in_min;
	double cost_of_call;
	char first,  second,  colon,  ans;
	
	cout<<" HERE WE CAN FIND THE COST OF CALLS\n";
	
	do
	{
	cout<<"\nEnter time in 24-hours notation (ex 13:30) =";
	cin>>hours>>colon>>min;
	
	cout<<"\n Enter length of call in minutes =";
	cin>>time_in_min;
	
	cout<<"\n Enter the first two letter of day of the call (ex. MO,Mo,mO,mo) =";
	cin>>first>>second;
	
	if(((first=='M') || (first=='m')) &&  ((second=='O') || (second=='o')))
	{
	       if ((hours>=8 && min>=0) || (hours<=18 && min<=0))
		   {
		   	
		   	cost_of_call  =  time_in_min  *  0.40;
		   	cout <<"\n cost of call is ="<< cost_of_call<<"$\n";
		   	
		   }
		   else
		   {
		   
		   	cost_of_call   =   time_in_min*0.25;
		   	cout<<"\n cost of call is ="<< cost_of_call<<"$\n";
		   	
		   }
   }
   else if(((first=='T') || (first=='t')) && ((second=='U') || (second=='u')))
	{
	       if ((hours>=8 && min>=0) || (hours<=18 && min<=0))
		   {
		   	
		   	cost_of_call=time_in_min*0.40;
		   	cout<<"\n cost of call is ="<< cost_of_call<<"$\n";
		   
		   }
		   else
		   {
		   
		   	cost_of_call=time_in_min*0.25;
		   	cout<<"\n cost of call is ="<< cost_of_call<<"$\n";
		  
		   } 
	}
	else if(((first=='W') ||  (first=='w')) && ((second=='E') || (second=='e')))
	{
	       if((hours>=8 && min>=0) || (hours<=18 && min<=0))
		   {
		   	
		   	cost_of_call=time_in_min*0.40;
		   	cout<<" \ncost of call is ="<< cost_of_call<<"$\n";
		   
		   }
		   else
		   {
		   
		   	cost_of_call=time_in_min*0.25;
		   	cout<<"\n cost of call is ="<< cost_of_call<<"$\n";
		  
		   }
		
    }
	else if(((first=='T') ||  (first=='t')) && ((second=='H') ||  (second=='h')))
	{
	       if((hours>=8 && min>=0) || (hours<=18 && min<=0))
		   {
		   	
		   	
		   	cost_of_call=time_in_min*0.40;
		   	cout<<"\n cost of call is ="<< cost_of_call<<"$\n";
		  
		   }
		   else
		   {
		   
		   	cost_of_call=time_in_min*0.25;
		   	cout<<" \ncost of call is ="<< cost_of_call<<"$\n";
		   
		   }
	}
	else if(((first=='F') || (first=='f')) && ((second=='R') || (second=='r')))
	{
	       if((hours>=8 && min>=0) || (hours<=18 && min<=0))
		   {
		   	
		   	cost_of_call=time_in_min*0.40;
		   	cout<<"\n cost of call is ="<< cost_of_call<<"$\n";
		   
		   }
		   else
		   {
		   
		   	cost_of_call=time_in_min*0.25;
		   	cout<<" \ncost of call is ="<< cost_of_call<<"$\n";
		  
		   }
		   
	}
	else if(((first=='S') || (first=='s')) &&  ((second=='A') ||(second=='a')))
	
		   {
		   	
		   	cost_of_call=time_in_min*0.15;
		   	cout<<"\n cost of call is ="<< cost_of_call<<"$\n";
		  
		   }

	else if(((first=='S') || (first=='s')) && ((second=='U') ||  (second=='u')))
	
	       
		   {
		   
		   	cost_of_call=time_in_min*0.15;
		   	cout<<"\n cost of call is ="<< cost_of_call<<"$\n";
		   }
		   
		   cout<<"\n DO you want to find the cost of another call? [type X/ x]\n";
		   cin >>ans;
    }
    
    
	while(ans=='X' || ans=='x');
    
    return 0;
}
























































