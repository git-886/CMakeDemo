#include <cstdlib>
#ifndef __NN_API_H__
#define __NN_API_H__
#ifdef WIN32
#ifdef NN_API_EXPORT 
#define NN_API  _declspec(dllexport)
#else
#define NN_API  _declspec(dllimport)
#endif
#else
#define NN_API
#endif



#if WIN32
#define NN_CALL __stdcall
#else 
#define NN_CALL
#endif

typedef int NN_STATUS;

#ifdef __cplusplus
extern "C" {
#endif

    /**
     * @brief 初始化网络参数
     * @param which 网络类型
     * @return 初始化网络状态
     */
    NN_API NN_STATUS NN_CALL InitNetwork(const char* which);

    /**
     * @brief 销毁网络参数
     * @return 销毁网络状态
     */
    NN_API NN_STATUS NN_CALL FiniNetwork();

    /**
     * @brief 进行网络训练
     * @param data 训练数据
     * @return 训练状态
     */
    NN_API NN_STATUS NN_CALL TrainNetwork(const char* data, size_t size);

    /**
     * @brief 进行网络推理
     * @param model 推理模型
     * @return 初始化网络状态
     */
    NN_API NN_STATUS NN_CALL InferNetwork(const char* model, size_t size);

#ifdef __cplusplus
}
#endif

#endif
