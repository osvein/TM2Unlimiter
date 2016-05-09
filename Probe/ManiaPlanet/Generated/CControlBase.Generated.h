        enum { CLASSID = 0x07001000 };

        static CControlBase*    CreateInstance ();

        enum eAlignHorizontal
        {
            ALIGNHORIZONTAL_LEFT,
            ALIGNHORIZONTAL_HCENTER,
            ALIGNHORIZONTAL_RIGHT,
            ALIGNHORIZONTAL_NONE
        };
        static std::wstring     AlignHorizontalToString                 ( eAlignHorizontal value );
        static eAlignHorizontal ParseAlignHorizontal                    ( const std::wstring& wstrName );

        enum eAlignVertical
        {
            ALIGNVERTICAL_TOP,
            ALIGNVERTICAL_VCENTER,
            ALIGNVERTICAL_BOTTOM,
            ALIGNVERTICAL_NONE,
            ALIGNVERTICAL_VCENTER2
        };
        static std::wstring     AlignVerticalToString                   ( eAlignVertical value );
        static eAlignVertical   ParseAlignVertical                      ( const std::wstring& wstrName );

        bool                    GetAddFocusArea                         () const;
        void                    SetAddFocusArea                         ( bool value );

        eAlignHorizontal        GetAlignHorizontal                      () const;
        void                    SetAlignHorizontal                      ( eAlignHorizontal value );

        eAlignVertical          GetAlignVertical                        () const;
        void                    SetAlignVertical                        ( eAlignVertical value );

        Vec2D                   GetBoxMax                               () const;
        void                    SetBoxMax                               ( Vec2D value );

        Vec2D                   GetBoxMin                               () const;
        void                    SetBoxMin                               ( Vec2D value );

        float                   GetClipLength                           () const;
        void                    SetClipLength                           ( float value );

        class CPlugTree*        GetControlDisplayTree                   () const;
        void                    SetControlDisplayTree                   ( class CPlugTree* value );

        class CPlugTree*        GetControlDrawTree                      () const;
        void                    SetControlDrawTree                      ( class CPlugTree* value );

        bool                    GetDrawBackground                       () const;
        void                    SetDrawBackground                       ( bool value );

        bool                    GetHasSolid                             () const;
        void                    SetHasSolid                             ( bool value );

        bool                    GetInheritVisualStyle                   () const;
        void                    SetInheritVisualStyle                   ( bool value );

        bool                    GetIsCreatedByScript                    () const;
        void                    SetIsCreatedByScript                    ( bool value );

        bool                    GetIsDynamic                            () const;
        void                    SetIsDynamic                            ( bool value );

        bool                    GetIsFocusCaptured                      () const;
        void                    SetIsFocusCaptured                      ( bool value );

        bool                    GetIsFocused                            () const;
        void                    SetIsFocused                            ( bool value );

        bool                    GetIsHiddenExternal                     () const;
        void                    SetIsHiddenExternal                     ( bool value );

        bool                    GetIsHiddenInternal                     () const;
        void                    SetIsHiddenInternal                     ( bool value );

        bool                    GetIsReadOnly                           () const;
        void                    SetIsReadOnly                           ( bool value );

        bool                    GetIsSelected                           () const;
        void                    SetIsSelected                           ( bool value );

        bool                    GetIsStackNeeded                        () const;
        void                    SetIsStackNeeded                        ( bool value );

        bool                    GetIsSubSolid                           () const;
        void                    SetIsSubSolid                           ( bool value );

        bool                    GetIsVisualFocus                        () const;
        void                    SetIsVisualFocus                        ( bool value );

        bool                    GetIsVisualSelect                       () const;
        void                    SetIsVisualSelect                       ( bool value );

        class CControlLayout*   GetLayout                               () const;
        void                    SetLayout                               ( class CControlLayout* value );

        class CMwNod*           GetNod                                  () const;
        void                    SetNod                                  ( class CMwNod* value );

        class CControlContainer* GetParent                               () const;
        void                    SetParent                               ( class CControlContainer* value );

        StringA                 GetStackText                            () const;
        void                    SetStackText                            ( StringA value );

        class CControlStyle*    GetStyle                                () const;
        void                    SetStyle                                ( class CControlStyle* value );

        StringW                 GetToolTip                              () const;
        void                    SetToolTip                              ( StringW value );

        void                    Clean                                   ();
        void                    Draw                                    ();
        void                    OnAction                                ();
