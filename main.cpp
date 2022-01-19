#include <iostream>
#include <fstream>
#include <string>
#include "employee.h"

int main() {
  
  try{
  std::ifstream input("employee.dat");

  if(!input){throw "Error opening input file";}

  std::ofstream a_stream{"output.dat"};
  
  if(!a_stream){throw "Error opening output file";}

  std::string S1;
  std::string S2;
  float pay;
  char c;
  int i = 0;
 

  while(!input.eof()){
  
  i++;

  if(!std::getline(input, S1, ',')){throw i;}
  
  
  if(!std::getline(input, S2, ',')){throw i;}
  
  
  if(!(input >> pay)){throw i;}
  
  
  employee a(S1, S2, pay);

  a.pay_raise();

  a.output(a_stream);

  std::cout << a;
  }
  }catch(char const* s)
  {
  std::cerr << s << std::endl;
  }catch(int i){
  std::cerr << "Error in input item number: " << i << std::endl;
  }

}