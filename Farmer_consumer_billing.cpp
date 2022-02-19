#include<iostream>
using namespace std;

int stock_potato=150, stock_tomato=150, stock_coconut=150;
int price_potato, price_tomato, price_coconut;



class Government_Market
{
	public:
	void set_price()
	{
		cout<<"Enter price of tomato:";
		cin>>price_tomato;
		cout<<"Enter price of potato:";
		cin>>price_potato;
		cout<<"Enter price of cocunut:";
		cin>>price_coconut;
	
	}
	void print_stock()
	{
		cout<<"here are the stock.....\n\n";
			cout<<"SNO\titem\tin_stock\tunit_price"<<endl;
			cout<<"------------------------------------------------------------"<<endl;
			cout<<"1"<<"\t"<<"potato"<<"\t"<<stock_potato<<"\t"<<"\t"<<price_potato<<endl;
			cout<<"2"<<"\t"<<"tomato"<<"\t"<<stock_tomato<<"\t"<<"\t"<<price_tomato<<endl;
			cout<<"3"<<"\t"<<"coconut"<<"\t"<<stock_coconut<<"\t"<<"\t"<<price_coconut<<endl;
			cout<<"------------------------------------------------------------"<<endl;
	}
	
};

class Farmer: public Government_Market
{
	public:
		string name;
		
		int tpotato=0;
		int ttomato=0;
		int tcoconut=0;
		
		int mob;
		int qpotato;
		int qtomato;
		int qcoconut;
		
		int amt_potato=0;
		int amt_tomato=0;
		int amt_coconut=0;

	void vegetables_sale()
	{
		cout<<"Farmer's part of sales";
		cout<<"Enter no. of potatoes to sale:";
		cin>>qpotato;
		cout<<"Enter no. of tomatoes to sale:";
		cin>>qtomato;
		cout<<"Enter no. of cocunut to sale:";
		cin>>qcoconut;
		
		stock_potato=stock_potato+qpotato;
		stock_tomato=stock_tomato+qtomato;
		stock_coconut=stock_coconut+qcoconut;
		
		amt_potato=amt_potato+price_potato*qpotato;
		amt_tomato=amt_tomato+price_tomato*qtomato;
		amt_coconut=amt_coconut+price_coconut*qcoconut;
		
		tpotato=tpotato+qpotato;
		ttomato=ttomato+qtomato;
		tcoconut=tcoconut+qcoconut;
		
		cout<<"here are the summary of the farmer sale:......\n";
		cout<<"SNO\titem\ttotal_sale\tamount_earned"<<endl;
			cout<<"------------------------------------------------------------"<<endl;
			cout<<"1"<<"\t"<<"potato"<<"\t"<<tpotato<<"\t"<<"\t"<<amt_potato<<endl;
			cout<<"2"<<"\t"<<"tomato"<<"\t"<<ttomato<<"\t"<<"\t"<<amt_tomato<<endl;
			cout<<"3"<<"\t"<<"coconut"<<"\t"<<tcoconut<<"\t"<<"\t"<<amt_coconut<<endl;
			cout<<"------------------------------------------------------------"<<endl;
	}
};

class Consumer: public Government_Market
{
	public:
		int qpotato;
		int qtomato;
		int qcoconut;
		
		void vegetables_purchase()
		{
			cout<<"consumer buying vegetables";
		}
};




int main()
{
	
	cout<<"\n FARMER-CONSUMER \n\n";
	int choice,cont;
	
	
			Government_Market gov;
			Farmer f1,f2;
			Consumer c1,c2;
			
	while(cont){
		
	cout<<"Index........\n";
	cout<<"1. Gov officials to fix/update price\n";
	cout<<"2. Farmers to sale vegetables\n";
	cout<<"3. Consumers to check current stock\n";
	cout<<"4. Consumer to buy vegetables\n";
	
	cout<<"Enter your choice:";
	cin>>choice;
		switch(choice)
		{
			case 1:
			gov.set_price();	
			break;
			
			case 2: 
			f1.vegetables_sale();
			break;
			
			case 3:
				gov.print_stock();
				break;
				
			case 4:
				c1.vegetables_purchase();
				break;
			
			default:
				cout<<"invalid option....retry";
		
			
		}
		cout<<"\n\n\n......do you want to continue:(1>yes * 0>no):";
		cin>>cont;
	}
	cout<<"\n\n**THANKS**\n\n";

	
	return 0;
}
