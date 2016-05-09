        enum { CLASSID = 0x0908C000 };

        static CPlugMaterialFxGenCV* CreateInstance ();

        float                   GetDeltaYMax                            () const;
        void                    SetDeltaYMax                            ( float value );

        float                   GetDeltaYMin                            () const;
        void                    SetDeltaYMin                            ( float value );

        Array < class CPlugMaterial* >& GetMaterialToRayCasts                   () const;
        void                    SetMaterialToRayCasts                   ( Array < class CPlugMaterial* >& value );

