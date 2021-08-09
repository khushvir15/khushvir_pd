#include<iostream>
using namespace std;

int main()
{
	
	int r = 0;
	int c = 0;
	int b = 0;
	
    int l = 5;
	int u_input;
	int amount=0,count=0;

while(true)
{
         
         

         
//menu
    cout<<" ------YOU CAN PARK "<< l <<" VEHICALS------ "<<endl;
	cout<<"Press 1 for Rickshaw."<<endl;
	cout<<"Press 2 for Car."<<endl;
	cout<<"Press 3 for Bus."<<endl;
	cout<<"Press 4 to see Total Amount and Total count of vehical."<<endl;
	cout<<"Press 5 to Delete the Record."<<endl;
	
	cin>>u_input;
	

	 
	
if(u_input == 1)
      {
      	if(count<l)
      	{
      	amount = amount+100;
      	count++;
      	r++;
        }
        else
        {
        	cout<<"*********************************************"<<endl;
        	cout<<"Parking is full!"<<endl;
        	cout<<"*********************************************"<<endl;
		}
		
	  }
	  
	  else if(u_input == 2)
	  {
	  	if(count <l)
	  	{
	  		amount = amount + 200;
	  		count++;
	  		c++;
		  }
		  else
        {
        	cout<<"*********************************************"<<endl;
        	cout<<"Parking is full!"<<endl;
        	cout<<"*********************************************"<<endl;
		}
	  }
	  
	   else if(u_input == 3)
	  {
	  	if(count <l)
	  	{
	  		amount = amount + 300;
	  		count++;
	  		b++;
		  }
		  else
        {
        	cout<<"*********************************************"<<endl;
        	cout<<"Parking is full!"<<endl;
        	cout<<"*********************************************"<<endl;
		}
	  }
	  
	  else if(u_input == 4)
	  {
	  	cout<<"*********************************************"<<endl;
	  	cout<<"Total amount ="<<amount<<endl;
	  	cout<<"Total number of vehicals ="<<count<<endl;
	  	cout<<"Total number of Rickshaw ="<<r<<endl;
	  	cout<<"Total number of cars ="<<c<<endl;
	  	cout<<"Total number of Buses ="<<b<<endl;
	  	cout<<"*********************************************"<<endl;

	  }
	  
	  else if(u_input == 5)
	  {
	  	amount = 0;
	  	count = 0;
		  r = 0;
		  c = 0;
		  b = 0;
		  cout<<"*********************************************"<<endl;
		  cout<<"Record is Deleted!"<<endl;
		  cout<<"*********************************************"<<endl;
	  }
	  
	 else
	 {
	 	cout<<"*********************************************"<<endl;
	 	cout<<"Invalid Key Press! (Enter the valid key)."<<endl;
	 	cout<<"*********************************************"<<endl;
	  } 



 }
   
	return 0;
}

