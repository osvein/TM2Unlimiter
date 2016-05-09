        enum { CLASSID = 0x2D015000 };

        static CSmArenaPhysics* CreateInstance ();

        class CScenePhy*        GetScenePhy                             () const;
        void                    SetScenePhy                             ( class CScenePhy* value );

        StringA                 GetServerVersionBuild                   () const;
        void                    SetServerVersionBuild                   ( StringA value );

        float                   GetTurretBulletSpawn_CanonOffsetTest    () const;
        void                    SetTurretBulletSpawn_CanonOffsetTest    ( float value );

        float                   GetTurretBulletSpawn_YOffsetTest        () const;
        void                    SetTurretBulletSpawn_YOffsetTest        ( float value );

        float                   GetTurretTarget_YOffsetTest             () const;
        void                    SetTurretTarget_YOffsetTest             ( float value );

