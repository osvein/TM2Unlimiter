        enum { CLASSID = 0x0A074000 };

        static CSceneFxOverlay* CreateInstance ();

        class CPlugShader*      GetShader                               () const;
        void                    SetShader                               ( class CPlugShader* value );

