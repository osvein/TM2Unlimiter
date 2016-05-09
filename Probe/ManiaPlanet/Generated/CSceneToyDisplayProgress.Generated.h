        enum { CLASSID = 0x0A04F000 };

        static CSceneToyDisplayProgress* CreateInstance ();

        float                   GetProgress                             () const;
        void                    SetProgress                             ( float value );

        class CFuncShader*      GetProgressFuncShader                   () const;
        void                    SetProgressFuncShader                   ( class CFuncShader* value );

        Id                      GetProgressTreeId                       () const;
        void                    SetProgressTreeId                       ( Id value );

