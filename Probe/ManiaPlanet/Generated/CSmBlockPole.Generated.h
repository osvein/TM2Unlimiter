        enum { CLASSID = 0x2D025000 };

        static CSmBlockPole*    CreateInstance ();

        bool                    GetCaptured                             () const;
        void                    SetCaptured                             ( bool value );

        class CSmGauge*         GetGauge                                () const;
        void                    SetGauge                                ( class CSmGauge* value );

        class CSmSector*        GetSector                               () const;
        void                    SetSector                               ( class CSmSector* value );

