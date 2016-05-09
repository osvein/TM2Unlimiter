        enum { CLASSID = 0x09065000 };

        static CPlugSoundVideo* CreateInstance ();

        class CPlugFileImg*     GetImageNonVideo                        () const;
        void                    SetImageNonVideo                        ( class CPlugFileImg* value );

        class CPlugFileVideo*   GetVideo                                () const;
        void                    SetVideo                                ( class CPlugFileVideo* value );

