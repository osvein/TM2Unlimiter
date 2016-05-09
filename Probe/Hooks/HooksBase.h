#pragma once

namespace Hooks
{

    class HooksBase
    {
    public:
                                    HooksBase               () {}
        virtual                     ~HooksBase              () {}

        virtual void                Init                    () = 0;

    protected:
        struct HookEntry
        {
            void**                  m_ppHookPos;
            void*                   m_pTarget;
        };

        void                        InstallHooks            ( HookEntry* pHookEntries );
        void                        CallOriginalFunction    ( void* pInstance, void* pMethod, int iArgsOffset, int iArgsSize );
    };

}
