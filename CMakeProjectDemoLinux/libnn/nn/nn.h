#ifndef __NN_H__
#define __NN_H__

class nn_i
{
public:
    virtual ~nn_i() = default;

    virtual int train(const char* data, size_t data_size) = 0;
    virtual int forward(const char* model, size_t model_size) = 0;
};

#endif
