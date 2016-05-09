        enum { CLASSID = 0x09003000 };

        static CPlugCrystal*    CreateInstance ();

        uint                    GetCrystalEdgeCount                     () const;
        void                    SetCrystalEdgeCount                     ( uint value );

        uint                    GetCrystalFaceCount                     () const;
        void                    SetCrystalFaceCount                     ( uint value );

        uint                    GetCrystalVertexCount                   () const;
        void                    SetCrystalVertexCount                   ( uint value );

