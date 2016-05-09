        enum { CLASSID = 0x0303E000 };

        static CGameAdvertisingElement* CreateInstance ();

        uint                    GetContentDisplayed                     () const;
        void                    SetContentDisplayed                     ( uint value );

        class CSystemFidFile*   GetFile                                 () const;
        void                    SetFile                                 ( class CSystemFidFile* value );

        uint                    GetNadeo_ContentId                      () const;
        void                    SetNadeo_ContentId                      ( uint value );

        float                   GetNadeo_MaxImpression                  () const;
        void                    SetNadeo_MaxImpression                  ( float value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

        List < nodptr<class CMwNod> >& GetOwnerNods                            () const;
        void                    SetOwnerNods                            ( List < nodptr<class CMwNod> >& value );

        void                    DisplayOrig                             ();
