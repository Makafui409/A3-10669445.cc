#include<iostream>
using namespace std;
int main()
{
	float score;
	cout<<"Please enter your score"<<endl;
	cin>>score;
	
	if(score>=80 & score<=100)
	{
		cout<<"You had an A"<<endl;
	}
	
	else if(score>=75 & score<=80)
	{
		cout<<"You had a B+"<<endl;
	}
	
	else if(score>=70 & score<=75)
	{
		cout<<"You had a B"<<endl;
	}
	
	else if(score>=65 & score<=70)
	{
		cout<<"You had a C+"<<endl;
	}
	
	else if(score>=60 & score<=64)
	{
		cout<<"You had a C"<<endl;
	}
	
	else if(score>=55 & score<=60)
	{
		cout<<"You had a D+"<<endl;
	}
	
	else if(score>=50 & score<=55)
	{
		cout<<"You had a D"<<endl;
	}
	
	else if(score>=45 & score<=50)
	{
		cout<<"You had an E"<<endl;
		cout<<"Please resit this course"<<endl;
	}
	
	else if(score>=0 & score<=45)
	{
		cout<<"You had an F"<<endl;
		cout<<"Please resit this course"<<endl;
	}
	
	else 
	{
		cout<<"Invalid input"<<endl;
	}
	return 0;
}
