#include "data.hpp"

using namespace std;

void data::set_feature_vector(vector<uint8_t> *vect){
    feature_vector = vect;
};
void data::append_to_feature_vector(uint8_t val){
    feature_vector->push_back(val);
};
void data::set_label(uint8_t val){
    label = val;
};
void data::set_enum_label(int val){
    enum_label = val;
};

int data::get_feature_vector_size(){
    return feature_vector->size();
};
uint8_t data::get_label(){
    return label;
};
uint8_t data::get_enum_label(){
    return enum_label;
};

vector<uint8_t> * data::get_feature_vector(){
    return feature_vector;
};