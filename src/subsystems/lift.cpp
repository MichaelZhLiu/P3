#include "subsystems/lift.hpp"
#include "main.h"

const int8_t liftPort = 10;

okapi::Motor lift = okapi::Motor(liftPort);
