 #include "data_handler.hpp"
 
// implementing methods 
public:
data_handler::data_handler(); // constructor
data_handler::~data_handler(); // destructor

void data_handler::read_feature_vector(std::string path); // since data file and label file are separate, we read them separately
void data_handler::read_feature_labels(std::string path);
void data_handler::split_data();
void data_handler::count_classes();

uint32_t data_handler::convert_to_little_endian(const unsigned char* bytes);

std::vector<data *> * data_handler::get_training_data();
std::vector<data *> * data_handler::get_test_data();
std::vector<data *> * data_handler::get_validation_data();