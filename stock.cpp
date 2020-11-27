
/*
products codes are first letter
*/

#include <iostream>
using namespace std;
void stock();

int main()
{
  
 while(1)  
 {	
	stock();}
}

void stock()
{
	int go[8]={1,2,3,4,5,6,7,8};
	int et[4]={1,2,3,4};
	int pa[0]={};
	int hi[5]={2,6,4,3,8};
	int ay[1]={5};
	cout<<"which product you ask?"<<endl;
    char x;
	cin>>x;

   if(x=='e')
 {
 	cout<<"number of products is "<<sizeof(et)/4<<" ."<<endl;
 }
  else if(x=='g')
 {
 	cout<<"number of products is"<<sizeof(go)/4<<"."<<endl;
 }
  else if(x=='h')
 {
 	cout<<"number of products is"<<sizeof(hi)/4<<"."<<endl;
 }
  else if(x=='a')
 {
 	cout<<"number of products is"<<sizeof(ay)/4<<"."<<endl;
 }
  else if(x=='p')
 {
 	cout<<"number of products is "<<sizeof(pa)/4<<" ."<<endl;}
 else
 {
 	cout<<"we don't have that product"<<endl;
 }
	
}


