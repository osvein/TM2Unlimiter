        enum { CLASSID = 0x0A063000 };

        static CSceneTrafficPath* CreateInstance ();

        class CSceneMobilTraffic* GetDropVehicles                         () const;
        void                    SetDropVehicles                         ( class CSceneMobilTraffic* value );

        uint                    GetLength                               () const;
        void                    SetLength                               ( uint value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

        Array < class CScenePath* >& GetScenePaths                           () const;
        void                    SetScenePaths                           ( Array < class CScenePath* >& value );

        Array < float >&        GetSpeedLimits                          () const;
        void                    SetSpeedLimits                          ( Array < float >& value );

