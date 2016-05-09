        enum { CLASSID = 0x0A00B000 };

        static CSceneLight*     CreateInstance ();

        class GxLight*          GetLight                                () const;
        void                    SetLight                                ( class GxLight* value );

