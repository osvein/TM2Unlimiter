        enum { CLASSID = 0x090CF000 };

        static CPlugSpline3D*   CreateInstance ();

        class CFuncKeysTrans*   GetKeys                                 () const;
        void                    SetKeys                                 ( class CFuncKeysTrans* value );

        float                   GetLength                               () const;
        void                    SetLength                               ( float value );

        Vec3D                   GetTranslate                            () const;
        void                    SetTranslate                            ( Vec3D value );

