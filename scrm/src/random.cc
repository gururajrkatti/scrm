#include "random.h"

RandomGenerator::RandomGenerator() { 
  this->set_seed(std::time(0));
}

RandomGenerator::RandomGenerator(int seed){
  this->set_seed(seed);
}

RandomGenerator::~RandomGenerator() { } ;
                         
double RandomGenerator::sample() {
  return(unif(rng));
}

// Uniformly samples a number out of 0, ..., range - 1
int RandomGenerator::sampleInt(int range) {
  return(static_cast<int>(this->sample()*range));
}

// Uniformly sets sample1/2 to two different elements of
// 0, ..., size - 1
void RandomGenerator::sampleTwoElements(int size, int *sample1, int *sample2) {
  *sample1 = this->sampleInt(size - 2);
  *sample2 = this->sampleInt(size - 1);
  if (*sample1 == *sample2) *sample2 = size - 1;
}

double RandomGenerator::sampleExpo(double lambda){
  return -std::log(this->sample()) / lambda;
}

void RandomGenerator::set_seed(const int &seed){
  this->rng.seed(static_cast<unsigned int>(seed));
  this->seed_ = seed;
}
