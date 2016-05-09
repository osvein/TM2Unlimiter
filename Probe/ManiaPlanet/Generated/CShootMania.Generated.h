        enum { CLASSID = 0x2D000000 };

        static CShootMania*     CreateInstance ();

        class CScene2d*         GetArenaInterfaceUIFid                  () const;
        void                    SetArenaInterfaceUIFid                  ( class CScene2d* value );

        class CSmArenaResource* GetArenaResources                       () const;
        void                    SetArenaResources                       ( class CSmArenaResource* value );

        class CSmArenaWorld*    GetArenaWorld                           () const;
        void                    SetArenaWorld                           ( class CSmArenaWorld* value );

        class CSmClient*        GetClient                               () const;
        void                    SetClient                               ( class CSmClient* value );

        class CSmServer*        GetServer                               () const;
        void                    SetServer                               ( class CSmServer* value );

