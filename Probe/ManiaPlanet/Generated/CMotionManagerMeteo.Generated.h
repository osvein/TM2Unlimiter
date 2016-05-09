        enum { CLASSID = 0x08052000 };

        static CMotionManagerMeteo* CreateInstance ();

        float                   GetBlockerDist                          () const;
        void                    SetBlockerDist                          ( float value );

        class CMotionManagerMeteoPuffLull* GetMeteoPuffLull                        () const;
        void                    SetMeteoPuffLull                        ( class CMotionManagerMeteoPuffLull* value );

        float                   GetStreamGlobalIntensity                () const;
        void                    SetStreamGlobalIntensity                ( float value );

        float                   GetTideBlend                            () const;
        void                    SetTideBlend                            ( float value );

        class CFuncKeysReal*    GetTideBlendFunc                        () const;
        void                    SetTideBlendFunc                        ( class CFuncKeysReal* value );

        float                   GetTideIn01                             () const;
        void                    SetTideIn01                             ( float value );

        float                   GetVariationsAmp                        () const;
        void                    SetVariationsAmp                        ( float value );

        float                   GetVariationsTimeFactor                 () const;
        void                    SetVariationsTimeFactor                 ( float value );

        List < nodptr<class CMotionWindBlocker> >& GetWindBlockers                         () const;
        void                    SetWindBlockers                         ( List < nodptr<class CMotionWindBlocker> >& value );

        float                   GetWindGlobalDirection                  () const;
        void                    SetWindGlobalDirection                  ( float value );

        float                   GetWindGlobalIntensity                  () const;
        void                    SetWindGlobalIntensity                  ( float value );

