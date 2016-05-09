        enum { CLASSID = 0x09056000 };

        static CPlugVertexStream* CreateInstance ();

        bool                    GetDirtyVision                          () const;
        void                    SetDirtyVision                          ( bool value );

        bool                    GetIsStatic                             () const;
        void                    SetIsStatic                             ( bool value );

        class CPlugVisualOctree* GetOctree                               () const;
        void                    SetOctree                               ( class CPlugVisualOctree* value );

        bool                    GetSkipVision                           () const;
        void                    SetSkipVision                           ( bool value );

