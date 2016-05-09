        enum { CLASSID = 0x0A10C000 };

        static CSceneToySeaHouleTable* CreateInstance ();

        bool                    GetFieldHouleUncompress                 () const;
        void                    SetFieldHouleUncompress                 ( bool value );

        float                   GetFoamExponant                         () const;
        void                    SetFoamExponant                         ( float value );

        float                   GetFoamScaleWorldXZ                     () const;
        void                    SetFoamScaleWorldXZ                     ( float value );

        float                   GetHouleGlobalScale                     () const;
        void                    SetHouleGlobalScale                     ( float value );

        Array < class CSceneToySeaHoule* >& GetHoules                               () const;
        void                    SetHoules                               ( Array < class CSceneToySeaHoule* >& value );

        float                   GetSeaBumpScale                         () const;
        void                    SetSeaBumpScale                         ( float value );

        Vec2D                   GetSeaBumpScaleUV                       () const;
        void                    SetSeaBumpScaleUV                       ( Vec2D value );

        void                    AddHoule                                ();
