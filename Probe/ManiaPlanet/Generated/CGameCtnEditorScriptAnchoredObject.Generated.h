        enum { CLASSID = 0x03159000 };

        static CGameCtnEditorScriptAnchoredObject* CreateInstance ();

        Vec3D                   GetPosition                             () const;
        void                    SetPosition                             ( Vec3D value );

        void                    UseCustomAnchor                         ();
        void                    UseDefaultAnchor                        ();
