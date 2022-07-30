//Poly is done a single job. here, one class inherited by
//lot. but every derived class has their own boishishto.
//it's controlance has done by. So let's it.

#include <iostream>
using namespace std;

class Animal{
  public:
    void animalSound(){
    cout << "The animal makes a sound \n";
  }
};

class Pig : public Animal{
  public:
    void animalSound(){
    cout << "The pig says: wee wee \n" ;
   }
};

// Derived class
class Dog : public Animal{
  public:
    void animalSound(){
    cout << "The dog says: bow wow \n" ;
  }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}