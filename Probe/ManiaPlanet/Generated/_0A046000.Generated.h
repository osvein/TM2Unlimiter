        enum { CLASSID = 0x0A046000 };

        static _0A046000*       CreateInstance ();

        bool                    GetCinematicAutoTrigger                 () const;
        void                    SetCinematicAutoTrigger                 ( bool value );

        List < float >&         GetFilterInputRemoveCommutationsParams  () const;
        void                    SetFilterInputRemoveCommutationsParams  ( List < float >& value );

        float                   GetLocalYawPitchSmoothing               () const;
        void                    SetLocalYawPitchSmoothing               ( float value );

        float                   GetNetworkYawPitchSmoothing             () const;
        void                    SetNetworkYawPitchSmoothing             ( float value );

        class CMwRefBuffer*     GetPhyCharModelLibrary                  () const;
        void                    SetPhyCharModelLibrary                  ( class CMwRefBuffer* value );

        bool                    GetPvPCollisions                        () const;
        void                    SetPvPCollisions                        ( bool value );

        StringA                 GetServerVersionBuild                   () const;
        void                    SetServerVersionBuild                   ( StringA value );

