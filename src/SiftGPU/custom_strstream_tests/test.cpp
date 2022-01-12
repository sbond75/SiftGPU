#include "../custom_strstream.hpp"

#include <iostream>

int main() {
  char buf[1024];
  ostrstream s(buf, 1024);
  s << "hi\0";
  std::cout << buf << std::endl;
}
