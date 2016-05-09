        enum { CLASSID = 0x08039000 };

        static CMotionTrackMobilMove* CreateInstance ();

        bool                    GetIsAbsolute                           () const;
        void                    SetIsAbsolute                           ( bool value );

        class CFuncKeysTrans*   GetKeysTrans                            () const;
        void                    SetKeysTrans                            ( class CFuncKeysTrans* value );

        float                   GetParametrizationDistMax               () const;
        void                    SetParametrizationDistMax               ( float value );

        void                    BuildChordLengthParametrization         ();
