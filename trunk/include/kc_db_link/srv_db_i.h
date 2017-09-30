#pragma once

#include "framework_ex/service_ex_i.h"
#include "framework_ex/framework_exception.h"

namespace KC
{
    // ���ݿ�ӿ�
    class IKCSrvDb : public IServiceEx
    {
    public:
        // ����
        virtual void run(void) = 0;

    protected:
        virtual CALL_TYPE ~IKCSrvDb() = default;
    };

    constexpr const char c_KCSrvDbSrvGUID[] = "IKCSrvDb_B5E289BB-ADB8-92F8-CF31-BD411D2F5BBD";

    class TKCSrvDbException : public TFWSrvException
    {
    public:
            TKCSrvDbException(int id, string place, string msg, string name)
                            : TFWSrvException(id, place, msg, name, c_KCSrvDbSrvGUID) {}
            TKCSrvDbException(int id, string place, string msg, IKCSrvDb& srv)
                            : TFWSrvException(id, place, msg, srv) {}
    };
}
