        enum { CLASSID = 0x09040000 };

        static CPlugFileGPU*    CreateInstance ();

        bool                    GetIsGeneratedFromFixedPipe             () const;
        void                    SetIsGeneratedFromFixedPipe             ( bool value );

        uint                    GetOpCountArith                         () const;
        void                    SetOpCountArith                         ( uint value );

        uint                    GetOpCountTexLd                         () const;
        void                    SetOpCountTexLd                         ( uint value );

        uint                    GetVersionIdMin                         () const;
        void                    SetVersionIdMin                         ( uint value );

