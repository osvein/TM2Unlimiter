#pragma once

namespace Hooks
{

    class MapTaggingHooks : public HooksBase
    {
    public:
        void                    Init                ();

    private:
        static void             OnWroteChallengeXML ();

        static TM2Unlimiter*    ms_pUnlimiter;
    };

}
