        enum { CLASSID = 0x03105000 };

        static CGameManialinkPage* CreateInstance ();

        bool                    GetLinksInhibited                       () const;
        void                    SetLinksInhibited                       ( bool value );

        class CGameManialinkFrame* GetMainFrame                            () const;
        void                    SetMainFrame                            ( class CGameManialinkFrame* value );

        class CGameManialinkScriptHandler* GetScriptHandler                        () const;
        void                    SetScriptHandler                        ( class CGameManialinkScriptHandler* value );

        StringA                 GetScriptText                           () const;
        void                    SetScriptText                           ( StringA value );

        StringA                 GetUrl                                  () const;
        void                    SetUrl                                  ( StringA value );

        class CGameManialinkControl* GetFirstChild                           ( StringA strControlId );
