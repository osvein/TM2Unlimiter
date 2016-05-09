        enum { CLASSID = 0x03132000 };

        static CGamePlayerProfileChunk_Campaign* CreateInstance ();

        class CGameCtnCampaign* GetCampaign                             () const;
        void                    SetCampaign                             ( class CGameCtnCampaign* value );

