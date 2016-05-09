        enum { CLASSID = 0x030A1000 };

        static CGameCtnMediaBlockCameraPath* CreateInstance ();

        float                   GetCurveLength                          () const;
        void                    SetCurveLength                          ( float value );

        bool                    GetIsPathDirty                          () const;
        void                    SetIsPathDirty                          ( bool value );

        Array < float >&        GetLengths                              () const;
        void                    SetLengths                              ( Array < float >& value );

        class CFuncKeysTrans*   GetPath                                 () const;
        void                    SetPath                                 ( class CFuncKeysTrans* value );

        float                   GetTotalWeight                          () const;
        void                    SetTotalWeight                          ( float value );

