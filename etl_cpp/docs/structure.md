**Data Container Setup and Definition:**

`data.hpp`: Defines the Data Container class, which serves as the container to hold each line item, including the feature vector and associated labels.
Data Container Class: Stores the feature vector (image pixels), the actual class label, and an enumerated integer label.
`data.cc`: Implements the setter and getter methods for the Data Container, such as `set feature vector` and `set label`.

**Data Handler Setup and Core Methods:**

`data_handler.hpp`: Defines the Data Handler class, which encapsulates all necessary logic for reading in, splitting, and preparing the data,.
`read feature vector`: Function to read the four 32-bit integer headers (magic number, number of images, row size, column size) and then the pixel data from the feature file,.
`read labels`: Function to read the two 32-bit integer headers (magic number, number of labels) and then assign the label bytes to the corresponding Data Containers,.
`convert to little-endian`: Method used to correctly interpret 32-bit integer headers by byte swapping them from the binary big-endian format to little-endian,,.
`count classes`: Method to determine the number of unique classes in the dataset and map each class label to an enumerated value,.
`split data`: Method to randomly divide the full data set into training (75%), test (20%), and validation (5%) arrays using pointers to avoid memory overhead,,,.

**Final Output:**

`Lib data`: The resulting shared library file that is compiled from the C++ sources, which future machine learning algorithms will link against,.