        enum { CLASSID = 0x07024000 };

        static CControlDisplayGraph* CreateInstance ();

        void                    AddAutoVal                              ( class CMwNod* pNod, StringA strParam, uint uiDisplayMode, Vec3D vecColor, float fMinRange, float fMaxRange );
        void                    AddConstant                             ( float fValue, Vec3D vecColor );
