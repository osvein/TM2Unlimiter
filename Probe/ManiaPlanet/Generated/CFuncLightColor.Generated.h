        enum { CLASSID = 0x05019000 };

        static CFuncLightColor* CreateInstance ();

        color                   GetColor0                               () const;
        void                    SetColor0                               ( color value );

        color                   GetColor1                               () const;
        void                    SetColor1                               ( color value );

        class CPlugFileImg*     GetImage                                () const;
        void                    SetImage                                ( class CPlugFileImg* value );

