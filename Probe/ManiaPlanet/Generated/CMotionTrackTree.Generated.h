        enum { CLASSID = 0x08042000 };

        static CMotionTrackTree* CreateInstance ();

        class CFuncTree*        GetFuncTree                             () const;
        void                    SetFuncTree                             ( class CFuncTree* value );

        class CPlugTree*        GetTree                                 () const;
        void                    SetTree                                 ( class CPlugTree* value );

