        enum { CLASSID = 0x24036000 };

        static CTrackManiaPlayerInfo* CreateInstance ();

        float                   GetOffsetFromBestAtCurrentCP            () const;
        void                    SetOffsetFromBestAtCurrentCP            ( float value );

        class CTrackManiaScore* GetRaceScore                            () const;
        void                    SetRaceScore                            ( class CTrackManiaScore* value );

        uint                    GetReadyEnum                            () const;
        void                    SetReadyEnum                            ( uint value );

        bool                    GetReadyToGoNext                        () const;
        void                    SetReadyToGoNext                        ( bool value );

        StringA                 GetStrOffsetFromBestAtCurrentCP_MmSsCc  () const;
        void                    SetStrOffsetFromBestAtCurrentCP_MmSsCc  ( StringA value );

        StringA                 GetStrScoreOffsetFromBestAtCurrentCP    () const;
        void                    SetStrScoreOffsetFromBestAtCurrentCP    ( StringA value );

