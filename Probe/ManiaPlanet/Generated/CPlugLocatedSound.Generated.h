        enum { CLASSID = 0x09061000 };

        static CPlugLocatedSound* CreateInstance ();

        Matrix43                GetLoc                                  () const;
        void                    SetLoc                                  ( Matrix43 value );

        class CPlugSound*       GetSound                                () const;
        void                    SetSound                                ( class CPlugSound* value );

