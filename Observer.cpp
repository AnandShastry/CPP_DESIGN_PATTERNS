#include<iostream>
#include<vector>
#include<string>


using namespace std;

class person; //Forward declaration

class Listener
{
  public:
  virtual void personListener(const person& p,int val)
  {
      cout<<"Data changed:"<<val<<"\n";
  }
};

class person
{
  private:
  int age;
  vector<Listener*> lv;
  
  public:
  person():age(0)
  {
  }
  
  int getAge() const
  {
     return age;
  }
  
  
  int setAge(const int age)
  {
     this->age=age;
     notify();
  }
  
  void subscribe(Listener* larg)
  {
    lv.push_back(larg);
    
  }
  
  void notify()
  {
    for(auto a:lv)
    {
      a->personListener(*this,age);
    }
  }
  
};


int main()
{
  person p1;
  Listener l1;
  p1.subscribe(&l1);
  p1.setAge(10);
  p1.setAge(15);
  p1.setAge(20);
  return 1;
}
