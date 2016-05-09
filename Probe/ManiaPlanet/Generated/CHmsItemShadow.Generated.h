        enum { CLASSID = 0x06020000 };

        static CHmsItemShadow*  CreateInstance ();

        float                   GetFallOffEnd                           () const;
        void                    SetFallOffEnd                           ( float value );

        float                   GetFallOffStart                         () const;
        void                    SetFallOffStart                         ( float value );

        class CHmsShadowGroup*  GetGroupOverride                        () const;
        void                    SetGroupOverride                        ( class CHmsShadowGroup* value );

        float                   GetIntensity                            () const;
        void                    SetIntensity                            ( float value );

        float                   GetVolumeMaxZ                           () const;
        void                    SetVolumeMaxZ                           ( float value );

