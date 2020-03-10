
#include<bits/stdc++.h>

using namespace std;
//SMITPATEL9898
#include"iostream"
#include"stdio.h"
class Box
{
    long l;
    long b;
    long h;

    public:
        Box() : Box(0,0,0){

        }
        Box(int m,int n,int o) : l(m), b(n), h(o){

        }
        Box(Box &value) : Box(value.l,value.b,value.h){

        }
        long getLength(){
            return l;
        }
        long getBreadth(){
            return b;
        }
        long getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return l* b*h;

        }

        bool operator<(Box& b){
    
        if(this->getLength() < b.getLength()){
            return true;
        }else if(this->getBreadth() < b.getBreadth() && this->getLength() == b.getLength()){
            return true;
        }else if(this->getHeight() < b.getHeight() && this->getBreadth() == b.getBreadth() && this->getLength() < b.getLength()){
            return true;
        }
            return false;
        }

    friend ostream & operator << (ostream& out, Box& B){
        out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
        return out;
    }

};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}