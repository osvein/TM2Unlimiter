        enum { CLASSID = 0x05031000 };

        static CFuncTreeSubVisualSequence* CreateInstance ();

        uint                    GetSimpleModeEndIndex                   () const;
        void                    SetSimpleModeEndIndex                   ( uint value );

        bool                    GetSimpleModeIsLooping                  () const;
        void                    SetSimpleModeIsLooping                  ( bool value );

        uint                    GetSimpleModeStartIndex                 () const;
        void                    SetSimpleModeStartIndex                 ( uint value );

        class CFuncKeysNatural* GetSubKeys                              () const;
        void                    SetSubKeys                              ( class CFuncKeysNatural* value );

