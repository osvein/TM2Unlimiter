        enum { CLASSID = 0x0903B000 };

        static CPlugVisualGrid* CreateInstance ();

        float                   GetCourbifiant                          () const;
        void                    SetCourbifiant                          ( float value );

        float                   GetCourbifiant2                         () const;
        void                    SetCourbifiant2                         ( float value );

        uint                    GetNbPointX                             () const;
        void                    SetNbPointX                             ( uint value );

        uint                    GetNbPointZ                             () const;
        void                    SetNbPointZ                             ( uint value );

        float                   GetRangeX                               () const;
        void                    SetRangeX                               ( float value );

        float                   GetRangeZ                               () const;
        void                    SetRangeZ                               ( float value );

        void                    Courbificateur                          ();
