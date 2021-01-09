#include<bits/stdc++.h>
using namespace std;

  class Box
  {
  private:
    int l,b,h;
  public:
    Box(){
      l = 0;
      b = 0;
      h = 0;
    }
    Box(int& L,int& B,int& H){
      l = L;
      b = B;
      h = H;
    
   } 
   Box(Box& other)
   :l(other.l) , b(other.b) , h(other.h)
   {
     other.l = l;
     other.b = b;
     other.h = h;

   }
    int getLength(){
      return l;
    }
    int getBreadth(){
      return b;
    }
    int getHeight(){
      return h;
    }
     long long CalculateVolume(){
      return 1ll*l*b*h;
    }
    bool operator < (const Box& other) const{
      if(l < other.l) return true;
      else if(l == other.l && b < other.b) return true;
      else if ((l == other.l && b == other.b) && h < other.h) return true;
      else return false;
    }
    
    
  };
  
  ostream& operator << (ostream& stream, Box& other){
      stream << other.getLength() << " " << other.getBreadth()<< " " << other.getHeight(); 
      return stream;
    }
  
  
  
  
  

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


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