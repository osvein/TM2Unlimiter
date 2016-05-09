        enum { CLASSID = 0x09088000 };

        static CPlugBitmapRenderCubeMap* CreateInstance ();

        enum eDiscard
        {
            DISCARD_HMSITEM,
            DISCARD_SHADER
        };
        static std::wstring     DiscardToString                         ( eDiscard value );
        static eDiscard         ParseDiscard                            ( const std::wstring& wstrName );

        enum eeFarZ
        {
            EFARZ_CURRENT_CAMERA_S_FARZ,
            EFARZ_SPLIT,
            EFARZ_FORCEFARZ
        };
        static std::wstring     eFarZToString                           ( eeFarZ value );
        static eeFarZ           ParseeFarZ                              ( const std::wstring& wstrName );

        bool                    GetAverageReceiverCenters               () const;
        void                    SetAverageReceiverCenters               ( bool value );

        class CPlugBitmap*      GetBitmapImageSpace                     () const;
        void                    SetBitmapImageSpace                     ( class CPlugBitmap* value );

        float                   GetBitmapImageSpaceDistToCenter         () const;
        void                    SetBitmapImageSpaceDistToCenter         ( float value );

        float                   GetBitmapImageSpaceScaleHeight          () const;
        void                    SetBitmapImageSpaceScaleHeight          ( float value );

        Vec3D                   GetCenterPos                            () const;
        void                    SetCenterPos                            ( Vec3D value );

        uint                    GetCubeFaceCount                        () const;
        void                    SetCubeFaceCount                        ( uint value );

        eDiscard                GetDiscard                              () const;
        void                    SetDiscard                              ( eDiscard value );

        float                   GetFarZ                                 () const;
        void                    SetFarZ                                 ( float value );

        float                   GetMinDistToUpdate                      () const;
        void                    SetMinDistToUpdate                      ( float value );

        float                   GetNearZ                                () const;
        void                    SetNearZ                                ( float value );

        bool                    GetUseItemShaderFilter                  () const;
        void                    SetUseItemShaderFilter                  ( bool value );

        eeFarZ                  GeteFarZ                                () const;
        void                    SeteFarZ                                ( eeFarZ value );

        void                    SaveInTga                               ();
