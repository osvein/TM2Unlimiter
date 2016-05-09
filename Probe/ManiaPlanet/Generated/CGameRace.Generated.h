        enum { CLASSID = 0x03073000 };

        static CGameRace*       CreateInstance ();

        class CScene2d*         GetInterfaceFid                         () const;
        void                    SetInterfaceFid                         ( class CScene2d* value );

        void                    WriteDebugValidateStringToDisk          ();
