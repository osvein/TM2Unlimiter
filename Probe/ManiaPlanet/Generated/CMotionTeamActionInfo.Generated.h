        enum { CLASSID = 0x08043000 };

        static CMotionTeamActionInfo* CreateInstance ();

        enum eAnimAtDest
        {

        };
        static std::wstring     AnimAtDestToString                      ( eAnimAtDest value );
        static eAnimAtDest      ParseAnimAtDest                         ( const std::wstring& wstrName );

        enum eDestination
        {

        };
        static std::wstring     DestinationToString                     ( eDestination value );
        static eDestination     ParseDestination                        ( const std::wstring& wstrName );

        enum eTeamMateName
        {

        };
        static std::wstring     TeamMateNameToString                    ( eTeamMateName value );
        static eTeamMateName    ParseTeamMateName                       ( const std::wstring& wstrName );

        eAnimAtDest             GetAnimAtDest                           () const;
        void                    SetAnimAtDest                           ( eAnimAtDest value );

        float                   GetAnimAtDestDuration                   () const;
        void                    SetAnimAtDestDuration                   ( float value );

        eDestination            GetDestination                          () const;
        void                    SetDestination                          ( eDestination value );

        eTeamMateName           GetTeamMateName                         () const;
        void                    SetTeamMateName                         ( eTeamMateName value );

        float                   GetTeamMateSpeed                        () const;
        void                    SetTeamMateSpeed                        ( float value );

