#include<iostream>
using namespace std;
class ParentClass
{
  public:
  double polash;
};

class ChildClass : public ParentClass
{
  public:
  double shimul;
};

int main()
{
  ChildClass Flowers;
  Flowers.shimul = 8438.03;
  Flowers.polash = 9548.0839;
  cout << "Shimul's total point is = " << Flowers.shimul << endl;
  cout << "Polash's total point is = " << Flowers.polash << endl;
return 0;
}