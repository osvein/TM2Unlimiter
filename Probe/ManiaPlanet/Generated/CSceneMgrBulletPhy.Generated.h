        enum { CLASSID = 0x0A087000 };

        static CSceneMgrBulletPhy* CreateInstance ();

        class CMwRefBuffer*     GetBulletModels                         () const;
        void                    SetBulletModels                         ( class CMwRefBuffer* value );

        uint                    GetBulletRemovalDelay                   () const;
        void                    SetBulletRemovalDelay                   ( uint value );

        bool                    GetLaserVsBullet                        () const;
        void                    SetLaserVsBullet                        ( bool value );

