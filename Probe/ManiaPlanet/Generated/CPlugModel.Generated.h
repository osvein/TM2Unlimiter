        enum { CLASSID = 0x09092000 };

        static CPlugModel*      CreateInstance ();

        float                   GetExportScale                          () const;
        void                    SetExportScale                          ( float value );

        class CPlugModelTree*   GetModelTree                            () const;
        void                    SetModelTree                            ( class CPlugModelTree* value );

        StringA                 GetOrigin                               () const;
        void                    SetOrigin                               ( StringA value );

        float                   GetVertexPositionsQuantize              () const;
        void                    SetVertexPositionsQuantize              ( float value );

