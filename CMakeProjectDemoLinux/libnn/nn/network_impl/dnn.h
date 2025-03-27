#ifndef __DNN_H__
#define __DNN_H__
#include "nn/nn.h"

#include <string>
#include <iostream>

class dnn : public nn_i
{
public:
    explicit dnn(const char* conf)
        : conf_(conf)
    {
    }
    virtual ~dnn() = default;

    virtual int train(const char* data, size_t data_size) override
    {
        std::cout << "train with fully connected layer in dnn." << std::endl;
        return 0;
    }

    virtual int forward(const char* model, size_t model_size) override
    {
        std::cout << "forward with fully connected layer in dnn." << std::endl;
        return 0;
    }

public:
    std::string conf_;
};

#endif
