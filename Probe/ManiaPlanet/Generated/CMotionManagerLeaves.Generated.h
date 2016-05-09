        enum { CLASSID = 0x0804D000 };

        static CMotionManagerLeaves* CreateInstance ();

        bool                    GetIsActive                             () const;
        void                    SetIsActive                             ( bool value );

        class CSceneMobilLeaves* GetMobilLeaves                          () const;
        void                    SetMobilLeaves                          ( class CSceneMobilLeaves* value );

