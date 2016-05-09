        enum { CLASSID = 0x0907D000 };

        static CPlugMaterialFxs* CreateInstance ();

        Array < class CPlugMaterialFx* >& GetMaterialFxs                          () const;
        void                    SetMaterialFxs                          ( Array < class CPlugMaterialFx* >& value );

