        enum { CLASSID = 0x09081000 };

        static CPlugMaterialFxDynaBump* CreateInstance ();

        float                   GetInter1SizeX                          () const;
        void                    SetInter1SizeX                          ( float value );

        float                   GetInter1SizeZ                          () const;
        void                    SetInter1SizeZ                          ( float value );

        bool                    GetIsCollidable                         () const;
        void                    SetIsCollidable                         ( bool value );

        float                   GetMaxIntens                            () const;
        void                    SetMaxIntens                            ( float value );

        float                   GetSpeedMaxIntens                       () const;
        void                    SetSpeedMaxIntens                       ( float value );

