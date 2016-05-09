        enum { CLASSID = 0x0B003000 };

        static CSystemWindow*   CreateInstance ();

        bool                    GetHasPosChanged                        () const;
        void                    SetHasPosChanged                        ( bool value );

        bool                    GetHasSizeChanged                       () const;
        void                    SetHasSizeChanged                       ( bool value );

        uint                    GetPosX                                 () const;
        void                    SetPosX                                 ( uint value );

        uint                    GetPosY                                 () const;
        void                    SetPosY                                 ( uint value );

        float                   GetRatio                                () const;
        void                    SetRatio                                ( float value );

        uint                    GetSizeX                                () const;
        void                    SetSizeX                                ( uint value );

        uint                    GetSizeY                                () const;
        void                    SetSizeY                                ( uint value );

        StringA                 GetStatusString                         () const;
        void                    SetStatusString                         ( StringA value );

