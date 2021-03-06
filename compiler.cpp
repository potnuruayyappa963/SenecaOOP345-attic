#include <iostream>

int main(int , char* argv[])
{
  #pragma message "Compiling " __FILE__  " at : " __TIME__ " on " __DATE__

  std::cout <<"+++++++++++++++++++++++++++++++\n";
  std::cout << argv[0] << "\n";
  std::cout << "FILE '" __FILE__ "' compiled " __DATE__ " at " __TIME__  " on " __DATE__ 
    #ifdef __GNUC__  // either g++ or clang++
      #ifdef __clang__
        " by clang++ "
      #else
        " by g++ "
      #endif
       __VERSION__
    #endif
       "\n\n";
}
