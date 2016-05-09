        enum { CLASSID = 0x07027000 };

        static CControlStyleSheet* CreateInstance ();

        class CMwRefBuffer*     GetBuffer                               () const;
        void                    SetBuffer                               ( class CMwRefBuffer* value );

        Array < color >&        GetColors                               () const;
        void                    SetColors                               ( Array < color >& value );

        Array < float >&        GetColorsAlpha                          () const;
        void                    SetColorsAlpha                          ( Array < float >& value );

        class CControlStyle*    GetMasterStyle                          () const;
        void                    SetMasterStyle                          ( class CControlStyle* value );

        List < nodptr<class CMwNod> >& GetOverrides                            () const;
        void                    SetOverrides                            ( List < nodptr<class CMwNod> >& value );

        class CControlStyle*    GetPagerIconStyle                       () const;
        void                    SetPagerIconStyle                       ( class CControlStyle* value );

        class CControlStyle*    GetPagerTextBackgroundStyle             () const;
        void                    SetPagerTextBackgroundStyle             ( class CControlStyle* value );

        class CControlStyle*    GetPagerTextStyle                       () const;
        void                    SetPagerTextStyle                       ( class CControlStyle* value );

