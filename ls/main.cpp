#include <cstdlib>
#include <sys/types.h>
#include <dirent.h>

#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using std::begin;
using std::end;

int main(int argc, char* argv[]) {
  std::string const target = (argc < 2) ? "." : argv[1];
  DIR *dirp = opendir(target.c_str());
  struct dirent* ent;
  std::vector<std::string> names;

  while (ent = readdir(dirp), ent != NULL) {
    names.push_back(ent->d_name);
  }
  closedir(dirp);
  std::sort(begin(names), end(names));

  for(auto const &e: names) {
    std::cout << e << std::endl;
  }
  return 0;
}







