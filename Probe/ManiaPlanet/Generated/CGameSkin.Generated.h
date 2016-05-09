        enum { CLASSID = 0x03031000 };

        static CGameSkin*       CreateInstance ();

        List < uint >&          GetCustomizableClassIds                 () const;
        void                    SetCustomizableClassIds                 ( List < uint >& value );

        List < nodptr<class CMwNod> >& GetCustomizableFids                     () const;
        void                    SetCustomizableFids                     ( List < nodptr<class CMwNod> >& value );

        List < bool >&          GetCustomizableMipMaps                  () const;
        void                    SetCustomizableMipMaps                  ( List < bool >& value );

        List < StringA >&       GetCustomizableNames                    () const;
        void                    SetCustomizableNames                    ( List < StringA >& value );

        StringA                 GetDirName                              () const;
        void                    SetDirName                              ( StringA value );

        StringA                 GetDirNameAlt                           () const;
        void                    SetDirNameAlt                           ( StringA value );

        StringA                 GetPainterSceneId                       () const;
        void                    SetPainterSceneId                       ( StringA value );

        StringA                 GetPainterTextureName                   () const;
        void                    SetPainterTextureName                   ( StringA value );

