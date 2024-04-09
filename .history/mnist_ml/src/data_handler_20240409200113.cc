 #include "data_handler.hpp"
 
// implementing methods 
public:
data_handler::data_handler(); // constructor
{
  data_array = new std::vector<data *>;
  test_data = new std::vector<data *>;
  training_data = new std::vector<data *>;
  validation_data = new std::vector<data *>;
}
data_handler::~data_handler(); // destructor
{
  // Free dynamically allocated stuff
}

void data_handler::read_feature_vector(std::string path); // since data file and label file are separate, we read them separately
{
  uint32_t header[4]; // |MAGIC|NUM IMAGES|ROWSIZE|COLSIZE order of the 4 elements
  unsigned char bytes[4]; // All 32 bits can be read in
  FILE *f = fopen(path.c_str(), "r");
  if(f) // if the file pointer is not null
  {
    for(int i = 0; i < 4, i++)
    {
      if(fread(bytes, sizeof(bytes), 1, f))
      {
        header[i] = convert_to_little_endian(bytes);
      }
    }
    printf("Done getting file header.\n");
    int image_size = header[2]*header[3]; // iterating through the number of images
    for(int i = 0; i < header[1]; i++ )
    {
      // iterating over the next image size elements
    }
  }
}
void data_handler::read_feature_labels(std::string path);
void data_handler::split_data();
void data_handler::count_classes();

uint32_t data_handler::convert_to_little_endian(const unsigned char* bytes);

std::vector<data *> * data_handler::get_training_data();
std::vector<data *> * data_handler::get_test_data();
std::vector<data *> * data_handler::get_validation_data();