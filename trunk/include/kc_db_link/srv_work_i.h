#pragma once

#include "framework_ex/service_ex_i.h"
#include "framework_ex/framework_exception.h"

namespace KC
{
    // ������Ӧ�ص��ӿ�
    class IRespondBackCall
    {
    public:
        // ��Ӧ���
        virtual void respond(const char*, const char*, int) = 0;
    };

    // ������ӿ�
    class IKCSrvWork : public IServiceEx
    {
    public:
        // ��������
        virtual void request(const char*, const char*, int, IRespondBackCall&) = 0;

    protected:
        virtual CALL_TYPE ~IKCSrvWork() = default;
    };

    constexpr const char c_KCSrvWorkSrvGUID[] = "IKCSrvWork_B5E289BB-ADB8-92F8-CF31-BD411D2FC2BE";

    class TKCSrvWorkException : public TFWSrvException
    {
    public:
            TKCSrvWorkException(int id, string place, string msg, string name)
                            : TFWSrvException(id, place, msg, name, c_KCSrvWorkSrvGUID) {}
            TKCSrvWorkException(int id, string place, string msg, IKCSrvWork& srv)
                            : TFWSrvException(id, place, msg, srv) {}
    };
}
