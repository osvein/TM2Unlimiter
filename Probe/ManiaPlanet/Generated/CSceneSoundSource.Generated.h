        enum { CLASSID = 0x0A00E000 };

        static CSceneSoundSource* CreateInstance ();

        class CPlugSound*       GetPlugSound                            () const;
        void                    SetPlugSound                            ( class CPlugSound* value );

        void                    Play                                    ();
        void                    Stop                                    ();
