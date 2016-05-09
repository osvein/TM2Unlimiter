        enum { CLASSID = 0x05047000 };

        static CFuncCloudsSolids* CreateInstance ();

        Vec2D                   GetGridSizeXZ                           () const;
        void                    SetGridSizeXZ                           ( Vec2D value );

        List < nodptr<class CPlugSolid> >& GetSolidFids                            () const;
        void                    SetSolidFids                            ( List < nodptr<class CPlugSolid> >& value );

