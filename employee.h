#include <iostream>
#include <string>
//#include <fstream>

class employee{
  private:
  std::string first_name;
  std::string last_name;
  float monthly_pay;

  public:
  employee(const std::string& fn, const std::string& ln, float pay):
  first_name(fn),
  last_name(ln),
  monthly_pay(pay)
  {}

  void pay_raise(){
    std::cout << "Gave " << first_name << " a 50 dollar raise. \n\n";
    monthly_pay = monthly_pay + 50.00;
  }

  void output(std::ostream& s)const{
    s << first_name << " " << last_name << "\n";
    s << "Monthly pay: " << monthly_pay << "\n \n";
  }



  friend std::ostream& operator<<(std::ostream& s, const employee& e) {
      e.output(s);
      return s;
  }

  
  
};