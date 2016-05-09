        enum { CLASSID = 0x0903E000 };

        static CPlugBlendShapes* CreateInstance ();

        bool                    GetBlendNormals                         () const;
        void                    SetBlendNormals                         ( bool value );

        Array < float >&        GetBlendVals                            () const;
        void                    SetBlendVals                            ( Array < float >& value );

        bool                    GetNormalizeNormals                     () const;
        void                    SetNormalizeNormals                     ( bool value );

