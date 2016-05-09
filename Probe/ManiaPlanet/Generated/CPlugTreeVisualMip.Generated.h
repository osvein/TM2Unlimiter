        enum { CLASSID = 0x09015000 };

        static CPlugTreeVisualMip* CreateInstance ();

        Array < float >&        GetLevelsFarZ                           () const;
        void                    SetLevelsFarZ                           ( Array < float >& value );

        Array < class CPlugTree* >& GetLevelsTree                           () const;
        void                    SetLevelsTree                           ( Array < class CPlugTree* >& value );

