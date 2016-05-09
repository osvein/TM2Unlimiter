        enum { CLASSID = 0x0600E000 };

        static CHmsPortalProperty* CreateInstance ();

        bool                    GetAudibility                           () const;
        void                    SetAudibility                           ( bool value );

        class CHmsPortal*       GetPortal1                              () const;
        void                    SetPortal1                              ( class CHmsPortal* value );

        class CHmsPortal*       GetPortal2                              () const;
        void                    SetPortal2                              ( class CHmsPortal* value );

        bool                    GetVisibility                           () const;
        void                    SetVisibility                           ( bool value );

