        enum { CLASSID = 0x030AF000 };

        static CGameCtnEditor*  CreateInstance ();

        class CControlContainer* GetFrameRoot                            () const;
        void                    SetFrameRoot                            ( class CControlContainer* value );

        class CGameCamera*      GetGameCamera                           () const;
        void                    SetGameCamera                           ( class CGameCamera* value );

        class CGameScene*       GetGameScene                            () const;
        void                    SetGameScene                            ( class CGameScene* value );

