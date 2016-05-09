        enum { CLASSID = 0x0702C000 };

        static CControlMediaPlayer* CreateInstance ();

        class CPlugFileSnd*     GetMediaAudio                           () const;
        void                    SetMediaAudio                           ( class CPlugFileSnd* value );

        class CPlugFileVideo*   GetMediaVideo                           () const;
        void                    SetMediaVideo                           ( class CPlugFileVideo* value );

