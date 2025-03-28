#include "nn_api.h"

#include "nn/factory_impl/factory_impl.h"
#include "nn/factory.h"
#include "nn/nn.h"

#include <iostream>

static nn_i* g_nn = nullptr;

NN_API NN_STATUS NN_CALL InitNetwork(const char* which)
{
    factory_i* fct = new factory_impl();
    g_nn = fct->create_nn("dnn");

    return 0;
}

NN_API NN_STATUS NN_CALL FiniNetwork()
{
    delete g_nn; g_nn = nullptr;
    return 0;
}

NN_API NN_STATUS NN_CALL TrainNetwork(const char* data, size_t size)
{
    if (!g_nn)
        return -1;

    int ret = g_nn->train(data, size);
    if (0 != ret)
        std::cout << "failed to train the model." << std::endl;

    return ret;
}

NN_API NN_STATUS NN_CALL InferNetwork(const char* model, size_t size)
{
    if (!g_nn)
        return -1;

    int ret = g_nn->forward(model, size);
    if (0 != ret)
        std::cout << "failed to forward the model." << std::endl;

    return ret;
}
