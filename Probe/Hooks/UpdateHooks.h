#pragma once

namespace Hooks
{

    class UpdateHooks : public HooksBase
    {
    public:
        void                    Init                    ();

    private:
        static void             OnDefiningUpdateGroups  ();
    };

}
