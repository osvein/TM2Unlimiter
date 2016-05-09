        enum { CLASSID = 0x03045000 };

        static CGameOutlineBox* CreateInstance ();

        bool                    GetAdditiveElseBlendSrcA                () const;
        void                    SetAdditiveElseBlendSrcA                ( bool value );

        float                   GetHardLinesColorCoef                   () const;
        void                    SetHardLinesColorCoef                   ( float value );

        bool                    GetIsShowLines                          () const;
        void                    SetIsShowLines                          ( bool value );

        bool                    GetIsShowQuads                          () const;
        void                    SetIsShowQuads                          ( bool value );

        class CSceneMobil*      GetMobil                                () const;
        void                    SetMobil                                ( class CSceneMobil* value );

        float                   GetSoftLinesColorCoef                   () const;
        void                    SetSoftLinesColorCoef                   ( float value );

