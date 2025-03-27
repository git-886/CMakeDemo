#ifndef __CNN_H__
#define __CNN_H__
#include "nn/nn.h"

#include <string>
#include <iostream>

class cnn : public nn_i
{
public:
    explicit cnn(const char* conf)
        : conf_(conf)
    {
    }
    virtual ~cnn() = default;

    virtual int train(const char* data, size_t data_size) override
    {
        std::cout << "train with Convolution and Pooling layer in cnn." << std::endl;
        return 0;
    }

    virtual int forward(const char* model, size_t model_size) override
    {
        std::cout << "forward with Convolution and Pooling layer in cnn." << std::endl;
        return 0;
    }

public:
    std::string conf_;
};
#endif
