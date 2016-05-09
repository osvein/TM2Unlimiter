        enum { CLASSID = 0x05035000 };

        static CFuncPuffLull*   CreateInstance ();

        float                   GetBlendLull                            () const;
        void                    SetBlendLull                            ( float value );

        float                   GetBlendPuff                            () const;
        void                    SetBlendPuff                            ( float value );

        float                   GetCombine2nd8th                        () const;
        void                    SetCombine2nd8th                        ( float value );

        uint                    GetGenCount                             () const;
        void                    SetGenCount                             ( uint value );

        StringA                 GetGenLifeTimeMax                       () const;
        void                    SetGenLifeTimeMax                       ( StringA value );

        StringA                 GetGenLifeTimeMin                       () const;
        void                    SetGenLifeTimeMin                       ( StringA value );

        float                   GetGenLullWDMax                         () const;
        void                    SetGenLullWDMax                         ( float value );

        float                   GetGenLullWDMin                         () const;
        void                    SetGenLullWDMin                         ( float value );

        float                   GetGenPuffRatio                         () const;
        void                    SetGenPuffRatio                         ( float value );

        float                   GetGenPuffWDMax                         () const;
        void                    SetGenPuffWDMax                         ( float value );

        float                   GetGenPuffWDMin                         () const;
        void                    SetGenPuffWDMin                         ( float value );

        Vec2D                   GetGenSize                              () const;
        void                    SetGenSize                              ( Vec2D value );

        float                   GetLullWDMax                            () const;
        void                    SetLullWDMax                            ( float value );

        class CPlugMaterial*    GetMaterialLull                         () const;
        void                    SetMaterialLull                         ( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterialPuff                         () const;
        void                    SetMaterialPuff                         ( class CPlugMaterial* value );

        float                   GetPuffWDMax                            () const;
        void                    SetPuffWDMax                            ( float value );

        float                   GetTileSizeInWorld                      () const;
        void                    SetTileSizeInWorld                      ( float value );

