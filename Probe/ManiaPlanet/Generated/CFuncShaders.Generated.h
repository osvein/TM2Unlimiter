        enum { CLASSID = 0x05014000 };

        static CFuncShaders*    CreateInstance ();

        Array < class CFuncShader* >& GetFuncShaders                          () const;
        void                    SetFuncShaders                          ( Array < class CFuncShader* >& value );

