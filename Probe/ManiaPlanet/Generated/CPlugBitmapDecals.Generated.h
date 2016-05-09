        enum { CLASSID = 0x09078000 };

        static CPlugBitmapDecals* CreateInstance ();

        uint                    GetCellSizeX                            () const;
        void                    SetCellSizeX                            ( uint value );

        uint                    GetCellSizeY                            () const;
        void                    SetCellSizeY                            ( uint value );

        uint                    GetCellSizeZ                            () const;
        void                    SetCellSizeZ                            ( uint value );

        List < nodptr<class CPlugDecalModel> >& GetDecalModels                          () const;
        void                    SetDecalModels                          ( List < nodptr<class CPlugDecalModel> >& value );

        uint                    GetDecalSetCount                        () const;
        void                    SetDecalSetCount                        ( uint value );

