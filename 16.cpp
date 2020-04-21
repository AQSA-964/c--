#include <iostream>
#include <conio.h>

using namespace std ;

int main()

{ 
  int month , date;
 char  ans;

 do
 {
 
cout <<" Enter your birthday month  =" ;
cin>>month;

cout <<"\n Enter your birthday date =" ;
cin>>date;

  if ((month ==3  && date >= 21 ) || (month ==4 && date <= 19 ))
  
     {
             cout<<" \nYOU ARE ARIES!";
             cout <<" you are compatible with ARIES, LEO, SAGITTARIUS.\n";
     }
     
else if ((month ==4 && date >= 20 ) || (month ==5 && date <= 20 ))

     {
             cout<<" \nYOU ARE TAURUS!";
             cout <<" you are compatible with TARUS, VIRGO, AQUAIUS.\n";
     }
     
else if((month ==5 && date >= 21 ) || (month ==6 && date <= 21 ))

     {
             cout<<" \nYOU ARE GEMINI!";
             cout <<" you are compatible with GEMINI, LIBRA, AQUARIUS.\n";
     }
     
else if((month ==6 && date >= 22 ) || (month ==7 && date <= 22 ))

     {
             cout<<" \nYOU ARE CANCER!";
             cout <<" you are compatible with LEO, SAGITTARIUS, ARIES.\n";
     }

else if((month ==7 && date >= 23 ) || (month ==8 && date <= 22 ))

     {
             cout<<" \nYOU ARE LEO! ";
             cout <<" you are compatible with CANCER, SCORPIO, PISCES.\n";
     }

else if((month ==8 && date >= 23 ) || (month ==9 && date <= 22 ))

     {
             cout<<" \nYOU ARE VIRGO!";
             cout <<" you are compatible with VIRGO, TAURUS, CAPRICON.\n";
     }

else if((month ==9 && date >= 23 ) || (month ==10 && date <= 22 ))

     {
             cout<<" \nYOU ARE LIBRA!";
             cout <<" you are compatible with LIBRA, GEMINI, AQUARIUS .\n";
     }

else if((month ==10 && date >= 23 ) || (month ==11 && date <= 21 ))

     {
             cout<<" \nYOU ARE SCORPIO!";
             cout <<" you are compatible with SCORPIO, CANCER, PISCES.\n";
     }

else if((month ==11 && date >= 22 ) || (month ==12 && date <= 21 ))

     {
             cout<<" \nYOU ARE SAGITTARIUS!";
             cout <<" you are compatible with SAGITTARIUS, LEO, ARIES.\n";
     }

else if((month ==12 && date >= 22 ) || (month ==1 && date <= 19 ))

     { 
             cout<<" \nYOU ARE CAPRICORN!";
             cout <<" you are compatible with CAPRICORN, VIRGO, TAURUS.\n";
     }

else if((month ==1 && date >= 20 ) || (month ==2 && date <= 18 ))

     {
             cout<<" \nYOU ARE AQUARIUS!";
             cout <<" you are compatible with AQUARIUS, LIBRA, GEMINI.\n";
     }

else if((month ==2 && date >= 19 ) || (month ==3 && date <= 20 ))

     {
             cout<<" \nYOU ARE PISCES!";
             cout <<" you are compatible with PISCES, SCORPIO, CANCER.\n";
     }
cout<<"\n Would you like to find another horoscope ? (please type Z or z)\n"<<endl;

cin >> ans ;
}

while(ans== 'Z' || ans== 'z');

    return 0;
}




