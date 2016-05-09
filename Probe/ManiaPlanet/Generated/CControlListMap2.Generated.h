        enum { CLASSID = 0x07029000 };

        static CControlListMap2* CreateInstance ();

        class CPlugBitmap*      GetBitmap                               () const;
        void                    SetBitmap                               ( class CPlugBitmap* value );

        uint                    GetHelper1DisableIconIndex              () const;
        void                    SetHelper1DisableIconIndex              ( uint value );

        uint                    GetHelper1EnableIconIndex               () const;
        void                    SetHelper1EnableIconIndex               ( uint value );

        Vec2D                   GetMapRectMax                           () const;
        void                    SetMapRectMax                           ( Vec2D value );

        Vec2D                   GetMapRectMin                           () const;
        void                    SetMapRectMin                           ( Vec2D value );

        class CPlugMaterial*    GetMaterial                             () const;
        void                    SetMaterial                             ( class CPlugMaterial* value );

        StringA                 GetSpecialElemName                      () const;
        void                    SetSpecialElemName                      ( StringA value );

        class CControlStyle*    GetSpecialStyleElem                     () const;
        void                    SetSpecialStyleElem                     ( class CControlStyle* value );

        class CControlStyle*    GetSpecialStyleHelper1                  () const;
        void                    SetSpecialStyleHelper1                  ( class CControlStyle* value );

        class CControlStyle*    GetSpecialStyleHelper1Elem              () const;
        void                    SetSpecialStyleHelper1Elem              ( class CControlStyle* value );

        class CControlStyle*    GetSpecialStyleHelper2                  () const;
        void                    SetSpecialStyleHelper2                  ( class CControlStyle* value );

        StringA                 GetStackTextElem                        () const;
        void                    SetStackTextElem                        ( StringA value );

        StringA                 GetStackTextElemCoord                   () const;
        void                    SetStackTextElemCoord                   ( StringA value );

        StringA                 GetStackTextHelper1                     () const;
        void                    SetStackTextHelper1                     ( StringA value );

        StringA                 GetStackTextHelper1Coord                () const;
        void                    SetStackTextHelper1Coord                ( StringA value );

        StringA                 GetStackTextHelper1Elem                 () const;
        void                    SetStackTextHelper1Elem                 ( StringA value );

        StringA                 GetStackTextHelper1ElemCoord            () const;
        void                    SetStackTextHelper1ElemCoord            ( StringA value );

        StringA                 GetStackTextHelper2                     () const;
        void                    SetStackTextHelper2                     ( StringA value );

        StringA                 GetStackTextHelper2Coord                () const;
        void                    SetStackTextHelper2Coord                ( StringA value );

        class CControlStyle*    GetStyleElem                            () const;
        void                    SetStyleElem                            ( class CControlStyle* value );

        class CControlStyle*    GetStyleHelper1                         () const;
        void                    SetStyleHelper1                         ( class CControlStyle* value );

        class CControlStyle*    GetStyleHelper1Elem                     () const;
        void                    SetStyleHelper1Elem                     ( class CControlStyle* value );

        class CControlStyle*    GetStyleHelper2                         () const;
        void                    SetStyleHelper2                         ( class CControlStyle* value );

