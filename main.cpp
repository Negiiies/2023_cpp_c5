#include <cstring>
#include <iostream>
#include <ostream>
#include <ratio>
#include <string>
#include "stu.hpp"

// stu::string str = "hello world";
// str.dump();
int main(void)
{
    stu::string str1;
    stu::string str{"hello"};
    std::cout << str << "\n";
    std::cout << str1 << "\n";
}

/*
    stu::string str("toto");
    stu::string str2("tata");

    str2 = str;
    str = "hello";
    std::cout << "should be \"hello\"" << str << "\n";
    std::cout << "should be \"toto\"" << str2 << "\n";

stu::string str("hello");

str[1] = 'a';
std::cout << "should print hallo: " << str << "\n";
void print_by_char(const stu::string &str)
{
      unsigned int idx{0};
      auto len{str.size()};

      while (idx < len) {
              std::cout << str[idx];
              idx += 1;
      }
      std::cout << "\n";
}

int main(void)
{
      stu::string str("hello");

      print_by_char(str);
}
*/