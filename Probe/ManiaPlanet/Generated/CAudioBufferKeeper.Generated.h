        enum { CLASSID = 0x10002000 };

        static CAudioBufferKeeper* CreateInstance ();

        uint                    GetAllocSize                            () const;
        void                    SetAllocSize                            ( uint value );

        bool                    GetIsStreaming                          () const;
        void                    SetIsStreaming                          ( bool value );

        class CPlugFileSnd*     GetPlugFileSnd                          () const;
        void                    SetPlugFileSnd                          ( class CPlugFileSnd* value );

        uint                    GetPreBufferingSize                     () const;
        void                    SetPreBufferingSize                     ( uint value );

        float                   GetVolumeRms                            () const;
        void                    SetVolumeRms                            ( float value );

