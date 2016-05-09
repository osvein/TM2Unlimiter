        enum { CLASSID = 0x0316E000 };

        static CGameCtnChallengeTrafficElemDesc* CreateInstance ();

        Id                      GetElemId                               () const;
        void                    SetElemId                               ( Id value );

        uint                    GetFaction                              () const;
        void                    SetFaction                              ( uint value );

        class CPlugTrafficObjectParams* GetModel                                () const;
        void                    SetModel                                ( class CPlugTrafficObjectParams* value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

        class CSystemPackDesc*  GetPackDesc                             () const;
        void                    SetPackDesc                             ( class CSystemPackDesc* value );

        Id                      GetPathId                               () const;
        void                    SetPathId                               ( Id value );

        uint                    GetTimeOffset                           () const;
        void                    SetTimeOffset                           ( uint value );

        Id                      GetTrafficObjectAuthor                  () const;
        void                    SetTrafficObjectAuthor                  ( Id value );

        Id                      GetTrafficObjectCollection              () const;
        void                    SetTrafficObjectCollection              ( Id value );

        Id                      GetTrafficObjectId                      () const;
        void                    SetTrafficObjectId                      ( Id value );

