        enum { CLASSID = 0x09006000 };

        static CPlugVisual*     CreateInstance ();

        class CFuncVisual*      GetFuncVisual                           () const;
        void                    SetFuncVisual                           ( class CFuncVisual* value );

        bool                    GetIsGeometryDynaPart                   () const;
        void                    SetIsGeometryDynaPart                   ( bool value );

        bool                    GetIsGeometryStatic                     () const;
        void                    SetIsGeometryStatic                     ( bool value );

        bool                    GetIsIndexationStatic                   () const;
        void                    SetIsIndexationStatic                   ( bool value );

        bool                    GetOptimizeInVision                     () const;
        void                    SetOptimizeInVision                     ( bool value );

        bool                    GetUseVertexColor                       () const;
        void                    SetUseVertexColor                       ( bool value );

        bool                    GetUseVertexNormal                      () const;
        void                    SetUseVertexNormal                      ( bool value );

        Array < class CPlugVertexStream* >& GetVertexStreams                        () const;
        void                    SetVertexStreams                        ( Array < class CPlugVertexStream* >& value );

        List < Matrix43 >&      GetVisualToBones                        () const;
        void                    SetVisualToBones                        ( List < Matrix43 >& value );

        void                    Inverse                                 ();
