#include <iostream>
#include <conio.h>

using namespace std ;

int main()
{ 
 int    month , date;
 char  ans;
 cout<<" HERE WE CAN FIND THE SIGN AND HOROSCOPE FOR THAT BIRTHDAY"<<endl;
 do
 {
 
cout <<" \nEnter your birthday month  =" ;
cin>>month;

cout <<"\n Enter your birthday date =" ;
cin>>date;

  if ((month ==3  && date >= 21 ) || (month ==4 && date <= 19 ))
  
     {
             cout<<" \nYOU ARE ARIES!";
     }
     
else if ((month ==4 && date >= 20 ) || (month ==5 && date <= 20 ))

     {
             cout<<" \nYOU ARE TAURUS!";
     }
     
else if((month ==5 && date >= 21 ) || (month ==6 && date <= 21 ))

     {
             cout<<" \nYOU ARE GEMINI!";
     }
     
else if((month ==6 && date >= 22 ) || (month ==7 && date <= 22 ))

     {
             cout<<" \nYOU ARE CANCER!";
     }

else if((month ==7 && date >= 23 ) || (month ==8 && date <= 22 ))

     {
             cout<<" \nYOU ARE LEO! ";
     }

else if((month ==8 && date >= 23 ) || (month ==9 && date <= 22 ))

     {
             cout<<" \nYOU ARE VIRGO!";
     }

else if((month ==9 && date >= 23 ) || (month ==10 && date <= 22 ))

     {
             cout<<" \nYOU ARE LIBRA!";
     }

else if((month ==10 && date >= 23 ) || (month ==11 && date <= 21 ))

     {
             cout<<" \nYOU ARE SCORPIO!";
     }

else if((month ==11 && date >= 22 ) || (month ==12 && date <= 21 ))

     {
             cout<<" \nYOU ARE SAGITTARIUS!";
     }

else if((month ==12 && date >= 22 ) || (month ==1 && date <= 19 ))

     { 
             cout<<" \nYOU ARE CAPRICORN!";
     }

else if((month ==1 && date >= 20 ) || (month ==2 && date <= 18 ))

     {
             cout<<" \nYOU ARE AQUARIUS!";
     }

else if((month ==2 && date >= 19 ) || (month ==3 && date <= 20 ))

     {
             cout<<" \nYOU ARE PISCES!\n";
     }
cout<<"\n\n Would you like to find another horoscope ? (please type Z or z)\n"<<endl;

cin >> ans ;
}

while(ans== 'Z' || ans== 'z');

    return 0;
    
    
}



