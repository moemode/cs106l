#include "class.h"
#include <iostream>
/*
 * CS106L Assignment 3: Make a Class
 * Created by Fabio Ibanez with modifications by Jacob Roberts-Baca.
 */

/* #### Please don't change this line! #### */
int run_autograder();

int main() {
  // STUDENT TODO: Construct an instance of your class!
  Vec<int> v{10};
  v.push_back(10);
  v.push_back(20);
  for (uint64_t i = 0; i < v.getSize(); i++) {
    std::cout << v.get(i) << std::endl;
  }

  /* #### Please don't change this line! #### */
  return run_autograder();
}

/* #### Please don't change this line! #### */
#include "utils.hpp"