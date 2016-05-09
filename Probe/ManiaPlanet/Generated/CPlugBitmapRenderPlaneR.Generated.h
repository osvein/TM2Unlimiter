        enum { CLASSID = 0x0905C000 };

        static CPlugBitmapRenderPlaneR* CreateInstance ();

        enum ePlane
        {
            PLANE_FIXED,
            PLANE_TREEID,
            PLANE_FACEAVERAGE
        };
        static std::wstring     PlaneToString                           ( ePlane value );
        static ePlane           ParsePlane                              ( const std::wstring& wstrName );

        bool                    GetIsPlaneEqValid                       () const;
        void                    SetIsPlaneEqValid                       ( bool value );

        ePlane                  GetPlane                                () const;
        void                    SetPlane                                ( ePlane value );

        Vec4D                   GetPlaneEq                              () const;
        void                    SetPlaneEq                              ( Vec4D value );

        StringA                 GetTreeId                               () const;
        void                    SetTreeId                               ( StringA value );

