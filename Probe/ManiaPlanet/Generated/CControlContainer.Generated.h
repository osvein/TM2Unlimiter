        enum { CLASSID = 0x07002000 };

        static CControlContainer* CreateInstance ();

        bool                    GetAcceptOwnControls                    () const;
        void                    SetAcceptOwnControls                    ( bool value );

        Array < class CControlBase* >& GetChilds                               () const;
        void                    SetChilds                               ( Array < class CControlBase* >& value );

        class CMwCmdBlockMain*  GetCreateScript                         () const;
        void                    SetCreateScript                         ( class CMwCmdBlockMain* value );

        bool                    GetUseScript                            () const;
        void                    SetUseScript                            ( bool value );

        class CControlButton*   AddButtonScript                         ( StringA strId, Vec3D vecPosition, StringA strLabel, class CMwCmdBlockMain* pScript, class CControlStyle* pStyle );
        class CControlBase*     AddControl                              ( StringA strId, Vec3D vecPosition, StringA strLabel, class CMwNod* pNod, StringA strStack, StringA strType, class CControlStyle* pStyle );
        class CControlBase*     AddInstance                             ( class CControlBase* pModel, StringA strId, Vec3D vecPosition );
        class CControlLabel*    AddLabel                                ( StringA strId, Vec3D vecPosition, StringA strLabel, class CControlStyle* pStyle );
        void                    RemoveControl                           ( class CControlBase* pControl );
