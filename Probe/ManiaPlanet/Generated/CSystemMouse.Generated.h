        enum { CLASSID = 0x0B001000 };

        static CSystemMouse*    CreateInstance ();

        float                   GetCoordX                               () const;
        void                    SetCoordX                               ( float value );

        float                   GetCoordY                               () const;
        void                    SetCoordY                               ( float value );

        float                   GetDeltaWheel                           () const;
        void                    SetDeltaWheel                           ( float value );

        bool                    GetIsDownLeft                           () const;
        void                    SetIsDownLeft                           ( bool value );

        bool                    GetIsDownMiddle                         () const;
        void                    SetIsDownMiddle                         ( bool value );

        bool                    GetIsDownRight                          () const;
        void                    SetIsDownRight                          ( bool value );

        float                   GetTotalWheel                           () const;
        void                    SetTotalWheel                           ( float value );

