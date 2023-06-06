/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*WEATHER APP
NAME:S UDHAYANILA

SCHOOL NAME :SAKTHI MATRIC HIGHER SECONDARY SCHOOL 

DATA USED :
LOCATION

METHODS USED:

CLASS & OBJECT
IF
ELSE IF 
SWITCH
*/
	
	#include<iostream>
	
	using namespace std;
	class weather
	{
		public:
		int o,option;
		string loc;
		string s1="forest area";
		string s2="plains";
		string s3="mountain region";
		void getdata ()
		{
			cout<<"\n\nWELCOME TO WEATHER APP!!!";
			cout<<"\n\nLOCATIONS:\nforest area\nplains\nmountain region";
		}
		};
		class today:public weather 
		{public:
		void getdata1(){
			cout<<"\n\nToday report:";
		if(o=loc.compare(s1))
		{
		cout<<"\ntemperature:28°c\ncloudy!! \nrain!!\nthunderstorm!";
		}
		else if (o=loc.compare(s2)){
			cout<<"\ntemperature:33°c\nheatwaves!!\nsunny!!\ndry!!";
			}
			else if (o=loc.compare(s3)){
		cout<<"\ntemperature:22°c\ncool breeze!!\ncloudy";
		}
		else
		{
		cout <<"\nyou are in out of areas";
		}
		}
		};
		
		class yesterday:public weather
		{
			public:
			void getdata2(){
			cout<<"\nyesterday report:";
			
			if(o=loc.compare(s1))
			{
				cout<<"\ntemperature:35°c\nsunny!!\ndry \nhot";
			}
			else if(o=loc.compare(s2))
		{
		cout<<"\ntemperature:27°c\npartly cloudy!!\nthunderstorm \ncool breeze";
		}
		else if(o=loc.compare(s3))
		{
		cout<<"\ntemperature:43°c\nvery hot!!\nheatwaves\ndry";
		}
		else 
		{
			cout<<"you are in out of areas";
			}
			}
			};
		class tomorrow:public weather
		{
			public:
			void getdata3(){
		cout<<"\ntomorrow  weather report:";
		
		if(o=loc.compare(s1))
		{
			cout <<"\ntemperature:38°c\npartly sunny\nthunderstorm \nbreeze!!"; 
			}
		else if(o=loc.compare(s2))
		{
			cout<<"\ntemperature:36°c\ndry!!\nvery hot\nsunny!";
		}
	 else if(o=loc.compare(s3))
	 {
	 	cout<<"\ntemperature:22°c\nheavy rain!!\ncloudy !!\nthunderstorm ";
	 	}
	 else
	 {
	 	cout<<"\n you are in out of areas";
	 	}
	 	}
	 	};
	 	
	 	
	class weekly:public weather
{	public:
	void getdata4(){
		
		cout<<"\n\nweekly weather report:\n enter your option(1 to 7):";
		cin ;option;
		switch(option)
		{
		case 1:
		cout<<"\nMonday\nhigh cloud & very hot";
	break;
	
	case 2:
	cout<<"\nTuesday\ncloudy & very warm with thunderstorm";
	break;
	
	case 3:
		cout<<"\nWednesday\npartly sunny &  rain";
	break;
	
	case 4:
		cout<<"\nthursday\nmostly cloudy&  thunderstorm with rain";
	break;
		
	case 5:
		cout<<"\nfriday\nvery hot & heat waves";
	break;
		
	case 6:
		cout<<"\nsaturday\ncloudy & rain";
	break;
		
	case 7:
		cout<<"\nsunday\ncloudy & cold breeze with rain";
	break;
}
}
};

class monthly:public weather{
public:

void getdata5(){
	cout<<"\n\nmonthly weather report:\nenter your option (1 to 4):";
	cin>>option;
	switch(option)
	{
		case 1:
		cout<<"\nfirstweek\ntemperature:27-35°c\nsometimes cloudy & very hot sometimes";
	break;
	
	case 2:
		cout<<"\nsecondweek\ntemperature:31-40°c\nheat waves& very hot & dry";
	break;
	
	
	case 3:
		cout<<"\nthirdweek\ntemperature:25-39°c\ncloudy, rain & sometimes sunny";
	break;
	
		
		case 4:
		cout<<"\nfourthweek\ntemperature:15-23°c\ncloudy,heavy rain & cold breeze with thunderstorm";
	break;
	}
	}
	};
	
	int main ()
	{
	weather w1;
	today t1;
	yesterday y1;
	tomorrow t2;
	weekly w2;
	monthly m1;
	
w1.getdata ();
t1.getdata1();
y1.getdata2();
t2.getdata3();
w2.getdata4();
m1.getdata5();

    return 0;
    
    
 }



