        enum { CLASSID = 0x0602A000 };

        static CHmsCollZone*    CreateInstance ();

        uint                    GetAllocatedByteCount                   () const;
        void                    SetAllocatedByteCount                   ( uint value );

        uint                    GetUsedByteCount                        () const;
        void                    SetUsedByteCount                        ( uint value );

        Vec3D                   GetWarpExclusionBoxCenter               () const;
        void                    SetWarpExclusionBoxCenter               ( Vec3D value );

        Vec3D                   GetWarpExclusionBoxHalf                 () const;
        void                    SetWarpExclusionBoxHalf                 ( Vec3D value );

        float                   GetWaterBottomDeep                      () const;
        void                    SetWaterBottomDeep                      ( float value );

        float                   GetWaterBottomShallow                   () const;
        void                    SetWaterBottomShallow                   ( float value );

        float                   GetWaterTop                             () const;
        void                    SetWaterTop                             ( float value );

        uint                    GetcItemContinuous                      () const;
        void                    SetcItemContinuous                      ( uint value );

        uint                    GetcItemDiscrete                        () const;
        void                    SetcItemDiscrete                        ( uint value );

        uint                    GetcItemStatic                          () const;
        void                    SetcItemStatic                          ( uint value );

        uint                    GetcSurfaceContinuous                   () const;
        void                    SetcSurfaceContinuous                   ( uint value );

        uint                    GetcSurfaceDiscrete                     () const;
        void                    SetcSurfaceDiscrete                     ( uint value );

        uint                    GetcSurfaceStatic                       () const;
        void                    SetcSurfaceStatic                       ( uint value );

        void                    UpdateStatic                            ();
