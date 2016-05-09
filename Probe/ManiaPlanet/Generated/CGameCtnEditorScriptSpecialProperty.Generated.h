        enum { CLASSID = 0x0315A000 };

        static CGameCtnEditorScriptSpecialProperty* CreateInstance ();

        uint                    GetDefaultOrder                         () const;
        void                    SetDefaultOrder                         ( uint value );

        StringA                 GetDefaultTag                           () const;
        void                    SetDefaultTag                           ( StringA value );

        uint                    GetOrder                                () const;
        void                    SetOrder                                ( uint value );

        StringA                 GetTag                                  () const;
        void                    SetTag                                  ( StringA value );

