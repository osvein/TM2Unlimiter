        enum { CLASSID = 0x090D4000 };

        static CPlugFogVolume*  CreateInstance ();

        class CPlugFogMatter*   GetMatter                               () const;
        void                    SetMatter                               ( class CPlugFogMatter* value );

