// a program to demonstrate initalizer list in c++
// 11/7/19 Dr_T souce: GeekforGeeks 
#include<fstream>
#include <iostream>
using namespace std;

class Post
{
  private:
  int x;
  int y;
  public:
  Point(int i = 0, int j = 0): x(i, y(j){}
  /*
  The above initializer list is the same as:
  Point (int i = 0, int j = 0)
  {
    x = i;
    y = j;

  }
  */
int getX() {return x;}
int getY() {return y;}
void printPoint()
  {
    ofstream myfile;// like a cout for a file
  file.open ("Point.txt");
    file << fixed << setprecision(3) << " :" << s << endl;
  file << "X = " << t1.getX() << endl;
  file << "Y = " << t1.getY() << endl;
  
  }

};


int main()
{
  Point t1(10,15);
  cout << "X = " << t1.getX() << endl;
  cout << "Y = " << t1.getY() << endl;
// Dr.T challenge add a printPoint() void
// Print the X and Y data to a text file called Point.txt
// call the printPoint() method

}