#include "data_handler.hpp"
#include <iostream>

using namespace std;

data_handler::data_handler(){
    // Constructor: Initialize member variables
    data_array = new vector<data *>;
    training_data = new vector<data *>;
    test_data = new vector<data *>;
    validation_data = new vector<data *>;
    num_classes = 0;
    feature_vector_size = 0;
}

data_handler::~data_handler(){
    // Destructor: Clean up dynamically allocated memory
    // TODO: Free Dynamically Allocated Memory
}

void data_handler::read_feature_vector(string path){
    // TODO: Implement reading feature vectors from file
    uint32_t header[4]; // magic, number_of_images, rows, cols
    unsigned char bytes[4];
    FILE *file = fopen(path.c_str(), "rb");
    if(file){
        for(int i = 0; i < 4; i++){
            if(fread(bytes, sizeof(bytes), 1, file))
            {
                header[i] = convert_to_little_endian(bytes);
            }
        }
        cout << "Done getting file header\n";
        fclose(file);
    }
}

void data_handler::read_feature_labels(string path){
    // TODO: Implement reading feature labels from file
}

void data_handler::split_data(){
    // TODO: Implement splitting data into train/test/validation sets
}

void data_handler::count_classes(){
    // TODO: Implement counting unique classes
}

uint32_t data_handler::convert_to_little_endian(const unsigned char* bytes){
    // TODO: Implement little endian conversion
    return 0;
}

vector<data *> * data_handler::get_training_data(){
    return training_data;
}

vector<data *> * data_handler::get_test_data(){
    return test_data;
}

vector<data *> * data_handler::get_validation_data(){
    return validation_data;
}