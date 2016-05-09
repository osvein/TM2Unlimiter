        enum { CLASSID = 0x0B000000 };

        static CSystemEngine*   CreateInstance ();

        bool                    GetAnalyzerHasReadDuringPreviousFrame   () const;
        void                    SetAnalyzerHasReadDuringPreviousFrame   ( bool value );

        bool                    GetAnalyzerHasWrittenDuringPreviousFrame() const;
        void                    SetAnalyzerHasWrittenDuringPreviousFrame( bool value );

        void                    SynchUpdate                             ();
