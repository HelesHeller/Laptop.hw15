#include "GPU.h"

void GPU::SetBrand(const string brand)
{
    this->brand = brand;
}

void GPU::SetModel(const string model)
{
    this->model = model;
}

void GPU::Print() const {

    cout << "GPU: " << brand << " " << model << endl;
}
