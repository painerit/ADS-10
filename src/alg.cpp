// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
  std::vector<char> conseq;
  std::string go_out = tree[n -1];
  unsigned int shag = 0;
  if (shag < out.size) {
      while (shag < out.length()) {
            conseq.push_back(go_out[shag]);
            shag++;
      }
  }
  return conseq;
}
