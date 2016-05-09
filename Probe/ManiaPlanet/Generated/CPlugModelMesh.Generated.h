        enum { CLASSID = 0x09073000 };

        static CPlugModelMesh*  CreateInstance ();

        uint                    GetBlendShapeCount                      () const;
        void                    SetBlendShapeCount                      ( uint value );

        List < nodptr<class CMwNod> >& GetExts                                 () const;
        void                    SetExts                                 ( List < nodptr<class CMwNod> >& value );

        uint                    GetFrameCount                           () const;
        void                    SetFrameCount                           ( uint value );

        uint                    GetInfluenceCount                       () const;
        void                    SetInfluenceCount                       ( uint value );

        uint                    GetPolyCount                            () const;
        void                    SetPolyCount                            ( uint value );

        bool                    GetPolyIsDoubleSide                     () const;
        void                    SetPolyIsDoubleSide                     ( bool value );

        bool                    GetPolyIsMaterialIndex                  () const;
        void                    SetPolyIsMaterialIndex                  ( bool value );

        bool                    GetPolyIsSmoothingGroup                 () const;
        void                    SetPolyIsSmoothingGroup                 ( bool value );

        bool                    GetPolyIsVertexColor                    () const;
        void                    SetPolyIsVertexColor                    ( bool value );

        bool                    GetPolyIsVertexNormal                   () const;
        void                    SetPolyIsVertexNormal                   ( bool value );

        bool                    GetPolyIsVertexTangent                  () const;
        void                    SetPolyIsVertexTangent                  ( bool value );

        uint                    GetPolyVertexUvLayerCount               () const;
        void                    SetPolyVertexUvLayerCount               ( uint value );

        uint                    GetQuadCount                            () const;
        void                    SetQuadCount                            ( uint value );

        uint                    GetSpriteCount                          () const;
        void                    SetSpriteCount                          ( uint value );

        bool                    GetSpriteIsColor                        () const;
        void                    SetSpriteIsColor                        ( bool value );

        bool                    GetSpriteIsDiameter                     () const;
        void                    SetSpriteIsDiameter                     ( bool value );

        bool                    GetSpriteIsMaterialIndex                () const;
        void                    SetSpriteIsMaterialIndex                ( bool value );

        bool                    GetSpriteIsRotAngle                     () const;
        void                    SetSpriteIsRotAngle                     ( bool value );

        bool                    GetSpriteIsTextureAtlas                 () const;
        void                    SetSpriteIsTextureAtlas                 ( bool value );

        bool                    GetSpriteIsTextureSubId                 () const;
        void                    SetSpriteIsTextureSubId                 ( bool value );

        bool                    GetSpriteIsXYRatio                      () const;
        void                    SetSpriteIsXYRatio                      ( bool value );

        uint                    GetTriCount                             () const;
        void                    SetTriCount                             ( uint value );

        uint                    GetVertexCount                          () const;
        void                    SetVertexCount                          ( uint value );

        uint                    GetVertexInfluenceCount                 () const;
        void                    SetVertexInfluenceCount                 ( uint value );

