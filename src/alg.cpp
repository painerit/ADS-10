// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
  std::string go_out = tree[n -1];
  std::vector<char> conseq;
  long shag = 0;
  while (shag < out.size()) {
      conseq.push_back(go_out[shag]);
      shag++;
  }
  return conseq;
}
