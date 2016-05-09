        enum { CLASSID = 0x0700E000 };

        static CControlUiDockable* CreateInstance ();

        uint                    GetCurScreen                            () const;
        void                    SetCurScreen                            ( uint value );

        bool                    GetIsClosed                             () const;
        void                    SetIsClosed                             ( bool value );

        bool                    GetIsOpened                             () const;
        void                    SetIsOpened                             ( bool value );

        List < nodptr<class CControlForm> >& GetScreens                              () const;
        void                    SetScreens                              ( List < nodptr<class CControlForm> >& value );

        class CControlForm*     AddScreen                               ( StringA strId );
        void                    Close                                   ();
        void                    CreateRotate                            ( Vec3D vecAxis, float fMinAngle, float fMaxAngle );
        void                    CreateTranslate                         ( Vec3D vecStartPoint, Vec3D vecEndPoint );
        void                    NextScreen                              ();
        void                    Open                                    ();
        void                    PrevScreen                              ();
        void                    Switch                                  ();
