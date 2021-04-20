// Copyright 2021 Elise
#include <iostream>
#include <ctime>
#include "TimedDoor.h"

int main() {
  TimedDoor tDoor(5);
  tDoor.lock();
  tDoor.unlock();

  return 0;
}
