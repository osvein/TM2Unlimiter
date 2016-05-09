        enum { CLASSID = 0x0901D000 };

        static CPlugLight*      CreateInstance ();

        class CPlugBitmap*      GetBitmapFlare                          () const;
        void                    SetBitmapFlare                          ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapProjector                      () const;
        void                    SetBitmapProjector                      ( class CPlugBitmap* value );

        bool                    GetDuplicateGxLight                     () const;
        void                    SetDuplicateGxLight                     ( bool value );

        class CFuncLight*       GetFuncLight                            () const;
        void                    SetFuncLight                            ( class CFuncLight* value );

        class GxLight*          GetLight                                () const;
        void                    SetLight                                ( class GxLight* value );

        bool                    GetNightOnly                            () const;
        void                    SetNightOnly                            ( bool value );

        bool                    GetReflectByGround                      () const;
        void                    SetReflectByGround                      ( bool value );

        bool                    GetSceneLightAlwaysActive               () const;
        void                    SetSceneLightAlwaysActive               ( bool value );

        bool                    GetSceneLightOnlyWhenTreeVisible        () const;
        void                    SetSceneLightOnlyWhenTreeVisible        ( bool value );

        void                    MakeBall                                ();
        void                    MakeFrustum                             ();
        void                    MakePoint                               ();
        void                    MakeSpot                                ();
