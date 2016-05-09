        enum { CLASSID = 0x0905F000 };

        static CPlugFileBink*   CreateInstance ();

        bool                    GetDebugMode                            () const;
        void                    SetDebugMode                            ( bool value );

        bool                    GetIsFrameReadyToBeRendered             () const;
        void                    SetIsFrameReadyToBeRendered             ( bool value );

        bool                    GetMustCopyAll                          () const;
        void                    SetMustCopyAll                          ( bool value );

