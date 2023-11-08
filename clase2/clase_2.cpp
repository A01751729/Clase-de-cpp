# include <iostream>
# include <vector>

using std::cin;
using std::cout;
using std::endl;

void metodo(int x, int &y, int *z){
  x=x+5;
  y=y+10;
  *z=*z+100;
  }

int main(){

  
  int arreglo[3]={10,20,30};
  cout<<arreglo[1]<<endl;
  
  int *aparr=&arreglo[0];
  
  for (int i =0; i<3; i++)
  {
    cout<<aparr<<"  "<<*aparr<<endl;
    aparr++;
    }
  
  int x=10;
  int y=20;
  
  int *ap= &x;

  cout<<ap<<endl;
  cout<<*ap<<endl;
  
  //metodo(x,y, ap);
  
  cout<<x<<"  "<<y<<endl;
  
  return 0;
  }