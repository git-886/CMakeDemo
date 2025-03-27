#ifndef __FACTORY_IMPL_H__
#define __FACTORY_IMPL_H__

#include "nn/factory.h"

class nn_i;
class factory_impl : public factory_i
{
public:
    explicit factory_impl();
    virtual ~factory_impl() = default;

    virtual nn_i* create_nn(const char* name) override;
};

#endif