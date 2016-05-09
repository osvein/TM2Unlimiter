        enum { CLASSID = 0x0601D000 };

        static CHmsConfig*      CreateInstance ();

        bool                    GetFreezeViewportRun                    () const;
        void                    SetFreezeViewportRun                    ( bool value );

        Array < class CHmsShadowGroup* >& GetShadowGroups                         () const;
        void                    SetShadowGroups                         ( Array < class CHmsShadowGroup* >& value );

        uint                    GetViewportRunFrameCount                () const;
        void                    SetViewportRunFrameCount                ( uint value );

        uint                    GetViewportRunFrameRemaining            () const;
        void                    SetViewportRunFrameRemaining            ( uint value );

