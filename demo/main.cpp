#include "filesystem.hpp"

int main() {
  int main(int argc, char* argv[]){
    std::string path;
    if(argc > 1){
      path = argv[1];
    }else{
      path = "";
    }
    dirParse A(path);
    std::cout << A;
    return 0;
}