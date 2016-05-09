        enum { CLASSID = 0x0600A000 };

        static CHmsListener*    CreateInstance ();

        class CPlugAudioEnvironment* GetAudioEnvironment                     () const;
        void                    SetAudioEnvironment                     ( class CPlugAudioEnvironment* value );

        uint                    GetAudioGroupIdOfInterrest              () const;
        void                    SetAudioGroupIdOfInterrest              ( uint value );

        float                   GetEnclosedCoef                         () const;
        void                    SetEnclosedCoef                         ( float value );

        float                   GetInsideCoef                           () const;
        void                    SetInsideCoef                           ( float value );

        float                   GetUnderwaterCoef                       () const;
        void                    SetUnderwaterCoef                       ( float value );

