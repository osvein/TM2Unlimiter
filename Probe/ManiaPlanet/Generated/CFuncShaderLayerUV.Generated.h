        enum { CLASSID = 0x05015000 };

        static CFuncShaderLayerUV* CreateInstance ();

        enum eLayerEnum
        {

        };
        static std::wstring     LayerEnumToString                       ( eLayerEnum value );
        static eLayerEnum       ParseLayerEnum                          ( const std::wstring& wstrName );

        enum eSignalType
        {
            SIGNALTYPE_TRANSLINEAR,
            SIGNALTYPE_TRANSCIRCULAR,
            SIGNALTYPE_ROTATE,
            SIGNALTYPE_TRANSSUBTEXTURE,
            SIGNALTYPE_TRANSLINEARSCALE,
            SIGNALTYPE_COPYSUBTEXTURE,
            SIGNALTYPE_SCALE,
            SIGNALTYPE_RESET,
            SIGNALTYPE_TRANSSUBTEXTURE2,
            SIGNALTYPE_COMP,
            SIGNALTYPE_TRANSLINEARSCALEROTATE
        };
        static std::wstring     SignalTypeToString                      ( eSignalType value );
        static eSignalType      ParseSignalType                         ( const std::wstring& wstrName );

        Vec2D                   GetAmplitude                            () const;
        void                    SetAmplitude                            ( Vec2D value );

        float                   GetAngle                                () const;
        void                    SetAngle                                ( float value );

        float                   GetAngleEnd                             () const;
        void                    SetAngleEnd                             ( float value );

        float                   GetAngleStart                           () const;
        void                    SetAngleStart                           ( float value );

        Vec2D                   GetBase                                 () const;
        void                    SetBase                                 ( Vec2D value );

        class CPlugBitmap*      GetBitmapCopy                           () const;
        void                    SetBitmapCopy                           ( class CPlugBitmap* value );

        bool                    GetEnableBlending                       () const;
        void                    SetEnableBlending                       ( bool value );

        bool                    GetEnableMipMapping                     () const;
        void                    SetEnableMipMapping                     ( bool value );

        bool                    GetEnablePingPong                       () const;
        void                    SetEnablePingPong                       ( bool value );

        bool                    GetEnableSmooth                         () const;
        void                    SetEnableSmooth                         ( bool value );

        bool                    GetEnableSmoothBlend                    () const;
        void                    SetEnableSmoothBlend                    ( bool value );

        eLayerEnum              GetLayerEnum                            () const;
        void                    SetLayerEnum                            ( eLayerEnum value );

        StringA                 GetLayerName                            () const;
        void                    SetLayerName                            ( StringA value );

        uint                    GetNbSubTexture                         () const;
        void                    SetNbSubTexture                         ( uint value );

        uint                    GetNbSubTexturePerColumn                () const;
        void                    SetNbSubTexturePerColumn                ( uint value );

        uint                    GetNbSubTexturePerLine                  () const;
        void                    SetNbSubTexturePerLine                  ( uint value );

        Vec2D                   GetOffset                               () const;
        void                    SetOffset                               ( Vec2D value );

        Vec2D                   GetScale                                () const;
        void                    SetScale                                ( Vec2D value );

        eSignalType             GetSignalType                           () const;
        void                    SetSignalType                           ( eSignalType value );

        bool                    GetTopToBottom                          () const;
        void                    SetTopToBottom                          ( bool value );

        bool                    GetWriteW                               () const;
        void                    SetWriteW                               ( bool value );

        bool                    GetWriteX                               () const;
        void                    SetWriteX                               ( bool value );

        bool                    GetWriteY                               () const;
        void                    SetWriteY                               ( bool value );

        bool                    GetWriteZ                               () const;
        void                    SetWriteZ                               ( bool value );

