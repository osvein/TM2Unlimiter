#pragma once

namespace Hooks
{

    class BlockMixHooks : public HooksBase
    {
    public:
        virtual void                Init                                ();

    private:
        static void                 OnClearingAreaForBlock              ();
        static void                 OnBlockRemoved                      ();
        static void                 OnRemovingPillarBlock               ();
        static void                 OnValidatingBlockConnections        ();
        static void                 OnInitializingBuildArea             ();
        static void                 OnEditorInterfaceLoaded             ();
        static void                 OnProcessingCursorPreviewBlock      ();
        static void                 OnUserPlacingBlock                  ();
        static void                 OnUserDrawingRoad                   ();
        static void                 OnCreatingBlock                     ();
        static void                 OnCreatingBlockUnits                ();
        static void                 OnConnectingRoadBlockToDir          ();
        static void                 OnDisconnectingRoadBlockFromDir     ();

        static TM2Unlimiter*        ms_pUnlimiter;
        static EditorExtensions*    ms_pEditorExtensions;
    };

}
