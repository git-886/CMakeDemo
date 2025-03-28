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
     * @brief ��ʼ���������
     * @param which ��������
     * @return ��ʼ������״̬
     */
    NN_API NN_STATUS NN_CALL InitNetwork(const char* which);

    /**
     * @brief �����������
     * @return ��������״̬
     */
    NN_API NN_STATUS NN_CALL FiniNetwork();

    /**
     * @brief ��������ѵ��
     * @param data ѵ������
     * @return ѵ��״̬
     */
    NN_API NN_STATUS NN_CALL TrainNetwork(const char* data, size_t size);

    /**
     * @brief ������������
     * @param model ����ģ��
     * @return ��ʼ������״̬
     */
    NN_API NN_STATUS NN_CALL InferNetwork(const char* model, size_t size);

#ifdef __cplusplus
}
#endif

#endif
