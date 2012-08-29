#ifndef scrm_src_model
#define scrm_src_model

class Model
{
  public:
   Model();
   Model(int sample_size);
   ~Model();
                         
   //Getters & Setters
   int sample_size() { return this->sample_size_; }
   void set_sample_size(const int &sample_size) { this->sample_size_ = sample_size; }

   int population_size() { return this->population_size_; }
   void set_population_size(const int &population_size) { 
     this->population_size_ = population_size; }

   double mutation_rate() { return this->mutation_rate_; }
   void set_mutation_rate(const double &mutation_rate) { 
     this->mutation_rate_ = mutation_rate; }

   double recombination_rate() { return this->recombination_rate_; }
   void set_recombination_rate(const double &recombination_rate) {
     this->recombination_rate_ = recombination_rate; }

  private:
   int sample_size_;
   int population_size_;
   double mutation_rate_;
   double recombination_rate_;
};

#endif
