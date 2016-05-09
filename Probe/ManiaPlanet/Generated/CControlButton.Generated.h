        enum { CLASSID = 0x07007000 };

        static CControlButton*  CreateInstance ();

        enum eDisplayType
        {
            DISPLAYTYPE_TEXT,
            DISPLAYTYPE_ICON,
            DISPLAYTYPE_TEXT_ICON
        };
        static std::wstring     DisplayTypeToString                     ( eDisplayType value );
        static eDisplayType     ParseDisplayType                        ( const std::wstring& wstrName );

        class CMwCmdBlockMain*  GetActionScript                         () const;
        void                    SetActionScript                         ( class CMwCmdBlockMain* value );

        class CPlugSound*       GetActionSound                          () const;
        void                    SetActionSound                          ( class CPlugSound* value );

        eDisplayType            GetDisplayType                          () const;
        void                    SetDisplayType                          ( eDisplayType value );

        StringA                 GetIconId                               () const;
        void                    SetIconId                               ( StringA value );

        class CFuncEnum*        GetIcons                                () const;
        void                    SetIcons                                ( class CFuncEnum* value );

        StringW                 GetLabel                                () const;
        void                    SetLabel                                ( StringW value );

        uint                    GetSubIconIndexOff                      () const;
        void                    SetSubIconIndexOff                      ( uint value );

        uint                    GetSubIconIndexOn                       () const;
        void                    SetSubIconIndexOn                       ( uint value );

