/*Forex
Trading Game*/
#include <iostream>
#include <ctime>
#include <vector>
#include <string>
#include <cstdlib>//random
using namespace std;
int main()//main initialization
{
	srand(static_cast<unsigned int>(time(0)));
int randprice=rand();
	cout<<" Created by Shivam Agarwal this is a Stock Exchange Trading Game, to discuss something email- ShivamAgarwaloff@gmail.com"<<endl;
	int Coin=1000;
	int Quantity=0;
	string choice;
	vector<string> ownShare;
	vector<string> share;
	vector<int> sp;
	/*names of stock*/
	share.push_back("Apple");
	share.push_back("Dell");
	share.push_back("Tata");
	share.push_back("Infosys");
	/*price of stock*/
	sp.push_back((randprice%965)+1);
	sp.push_back((randprice%326)+1);
	sp.push_back((randprice%10)+1);
	sp.push_back((randprice%52)+1);
	vector<string>::iterator iter;
	cout<<"     You Have "<<Coin<<" Coins "<<" and you have "<<Quantity<<" shares "<<endl;
	int i=0;
	for(iter=share.begin(); iter!=share.end(); ++iter)
	{
		cout<<*iter<<endl;
		cout<<" price of the share"<<endl;
		cout<<" "<<sp[i]<<endl;
	++i;
	}
	cout<<endl;
	bool pl=true;
	int Tata=0,Apple=0,Infosys=0,Dell=0;
	cout<<" these are the available shares to buy"<<endl;
	while(pl!=false)
	{
	cout<<" wanna buy then enter the name of the share"<<endl;
	
	string again;
	bool gain=true;
	while(gain!=false)
	{
		cin>>choice;
	cout<<endl;
	cout<<" how much you want these shares"<<endl;
	cin>>Quantity;
	if(choice=="Apple"||choice=="apple"||choice=="APPLE")
	{
		if(Coin>=(Quantity*sp[0]))
		{
	 ownShare.push_back("Apple");
		Coin=Coin-(sp[0]*Quantity);
		Apple+=Quantity;
		cout<<"payment Successful"<<endl;
		cout<<"you have "<<Coin<<" coins"<<endl;
}else
{
	cout<<"You dont have Money";
}
}
else if(choice=="Dell"||choice=="dell"||choice=="DELL")
{
	if(Coin>=(Quantity*sp[1]))
		{
	ownShare.push_back("Dell");
		Coin=Coin-(sp[1]*Quantity);
Dell+=Quantity;
		cout<<"payment Successful "<<endl;
		cout<<"you have "<<Coin<<" coins"<<endl;
}
else
{
	cout<<"you dont have money"<<endl;
}
}

else if(choice=="Infosys"||choice=="infosys"||choice=="INFOSYS")
{
	if(Coin>=(Quantity*sp[3]))
		{
	ownShare.push_back("Infosys");
		Coin=Coin-(sp[3]*Quantity);
		cout<<"payment Successful"<<endl;
		Infosys+=Quantity;
		cout<<"you have "<<Coin<<" coins"<<endl;
		Quantity=0;
	}
	else
	{
		cout<<"You dont have Money"<<endl;
	}
}
else if(choice=="Tata"||choice=="TATA"||choice=="tata")
{
	if(Coin>=(Quantity*sp[2]))
		{
	ownShare.push_back("Tata");
		Coin=Coin-(sp[2]*Quantity);
		cout<<"payment Successful"<<endl;
		Tata+=Quantity;
		cout<<"you have "<<Coin<<" coins"<<endl;
		Quantity=0;
	}
	else{
		cout<<"you dont have money"<<endl;
	}
}
for(iter=ownShare.begin(); iter!=ownShare.end(); ++iter)
		{
			cout<<*iter<<endl;
		}
		cout<<"your total shares-"<<" "<<Apple+Tata+Infosys+Dell<<endl;
		cout<<"Dell-"<<Dell<<" apple- "<<Apple<<" tata-"<<Tata<<" infosys "<<Infosys<<endl;
		cout<<endl;
	cout<<"If you want to end buying press y otherwise enter n"<<endl;
	cin>>again;
	if(again=="y"||again=="Y")
	{
		gain=false;
	}
	else if(again=="n"||again=="N")
	{
		gain=true;
	}
	else
	{
		cout<<"Error";
	}
}
bool agai=true;
choice.clear();
while(agai!=false)
{
int Days;
string log;
cout<<"How many days you want to simulate the market"<<endl;
cin>>Days;
cout<<"Press x to simulate the market"<<endl;
cin>>log;
vector<int> selco;
if(log=="x")
{
	cout<<"OK Now Sell if you want"<<endl;
if(Days>0 &&Days<=49)
{
	selco.push_back((randprice%1000)+1);
	selco.push_back((randprice%390)+1);
	selco.push_back((randprice%23)+1);
	selco.push_back((randprice%100)+1);
}
if(Days>50)
{
	selco.push_back((randprice%1450)+1);
	selco.push_back((randprice%490)+1);
	selco.push_back((randprice%53)+1);
	selco.push_back((randprice%300)+1);
}
if(Days>0)
{
	selco.push_back((randprice%925)+1);
	selco.push_back((randprice%320)+1);
	selco.push_back((randprice%13)+1);
	selco.push_back((randprice%40)+1);
}
int Sel;
string Name;
cout<<"Enter the Name and No. of shares you want to sell"<<endl;
cin>>Name;
cout<<endl;
cin>>Sel;
cout<<endl;
int selled=0;
if(Name=="Apple"||Name=="apple"&& Sel<=Apple)
{
	selled=selco[0];
	cout<<" Ok "<<endl;
	Coin=Coin+0+selled*Sel;
	cout<<endl;
	Apple-=Sel;
	Quantity-=Sel;
	cout<<"price selled is : "<<selled;
	if(selled<sp[0])
	{
		cout<<"market crashed due to bad economy"<<endl;
	}
	else
	{
		cout<<"you earned well"<<endl;
	}
	cout<<"total coins "<<Coin<<" Total shares"<<Quantity<<" Apple Shares"<<Apple<<endl;
	
}
if(Name=="Dell"||Name=="dell"&& Sel<=Dell)
{
	selled=selco[1];
	cout<<" Ok "<<endl;
	Coin=Coin+0+selled*Sel;
	cout<<endl;
	Apple-=Sel;
	Quantity-=Sel;
	if(selled<sp[1])
	{
		cout<<"market crashed due to bad economy"<<endl;
	}
	else
	{
		cout<<"you earned well"<<endl;
	}
	cout<<"price selled is : "<<selled;
	cout<<"total coins "<<Coin<<" Total shares"<<Quantity<<" Dell Shares"<<Dell<<endl;
	
}
if(Name=="tata"||Name=="Tata"&& Sel<=Tata)
{
	selled=selco[2];
	cout<<" Ok "<<endl;
	Coin=Coin+0+selled*Sel;
	cout<<endl;
	Tata-=Sel;
	Quantity-=Sel;
	if(selled<sp[2])
	{
		cout<<"market crashed due to bad economy"<<endl;
	}
	else
	{
		cout<<"you earned well"<<endl;
	}
	cout<<"price selled is : "<<selled;
	cout<<"total coins "<<Coin<<" Total shares "<<Quantity<<" TATA Shares"<<Tata<<endl;
	
}
if(Name=="Infosys"||Name=="infosys"&& Sel<=Infosys)
{
	selled=selco[3];
	cout<<" Ok "<<endl;
	Coin=Coin+0+selled*Sel;
	cout<<endl;
	Infosys-=Sel;
	Quantity-=Sel;
	if(selled<sp[3])
	{
		cout<<"market crashed due to bad economy"<<endl;
	}
	else
	{
		cout<<"you earned well"<<endl;
	}
	cout<<"price selled is : "<<selled;
	cout<<"total coins "<<Coin<<" Total shares"<<Quantity<<" Infosys Shares"<<Infosys<<endl;
	
}
cout<<" Wanna Sell again? then press n otherwise y "<<endl;
cin>>choice;
if(choice=="y")
{
	agai=false;
}
else if(choice=="n")
{
	agai=true;
	
}
else
{
	cout<<"error";
	return -1;
}
}
}
string op;
cout<<"To buy Again press p otherwise q"<<endl;
cin>>op;
if(op=="p")
{pl=true;
}
else if(op=="q")
{
	pl=false;
}
else
{
	cout<<"error";
	return -1;
}
}
return 0;


cout<<endl;
cout<<"thanks for playing";
}
