        enum { CLASSID = 0x09010000 };

        static CPlugVisualSprite* CreateInstance ();

        class CPlugBitmapAtlas* GetBitmapAtlas                          () const;
        void                    SetBitmapAtlas                          ( class CPlugBitmapAtlas* value );

        bool                    GetSpriteIndexTC1                       () const;
        void                    SetSpriteIndexTC1                       ( bool value );

        class CPlugSpriteParam* GetSpriteParam                          () const;
        void                    SetSpriteParam                          ( class CPlugSpriteParam* value );

        bool                    GetUseTextureAtlas                      () const;
        void                    SetUseTextureAtlas                      ( bool value );

