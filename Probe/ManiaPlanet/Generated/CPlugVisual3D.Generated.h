        enum { CLASSID = 0x0902C000 };

        static CPlugVisual3D*   CreateInstance ();

        class CPlugBlendShapes* GetBlendShapes                          () const;
        void                    SetBlendShapes                          ( class CPlugBlendShapes* value );

        bool                    GetUseTgtU                              () const;
        void                    SetUseTgtU                              ( bool value );

        bool                    GetUseTgtV                              () const;
        void                    SetUseTgtV                              ( bool value );

        void                    ComputeFaceCull                         ();
        void                    ComputeOccBox                           ();
        void                    NegNormals                              ();
