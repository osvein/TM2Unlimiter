        enum { CLASSID = 0x1200D000 };

        static CNetClient*      CreateInstance ();

        List < nodptr<class CNetConnection> >& GetConnections                          () const;
        void                    SetConnections                          ( List < nodptr<class CNetConnection> >& value );

        uint                    GetLatestTimeSyncReception              () const;
        void                    SetLatestTimeSyncReception              ( uint value );

        uint                    GetLatestTimeSynchronization            () const;
        void                    SetLatestTimeSynchronization            ( uint value );

        uint                    GetNbrConnections                       () const;
        void                    SetNbrConnections                       ( uint value );

        uint                    GetNbrConnectionsDisconnecting          () const;
        void                    SetNbrConnectionsDisconnecting          ( uint value );

        uint                    GetNbrConnectionsDone                   () const;
        void                    SetNbrConnectionsDone                   ( uint value );

        uint                    GetNbrConnectionsInProgress             () const;
        void                    SetNbrConnectionsInProgress             ( uint value );

        uint                    GetNbrNewConnections                    () const;
        void                    SetNbrNewConnections                    ( uint value );

        uint                    GetPrevDiscontinuityTime                () const;
        void                    SetPrevDiscontinuityTime                ( uint value );

        uint                    GetReceivingDataRate                    () const;
        void                    SetReceivingDataRate                    ( uint value );

        uint                    GetReceptionNodTotal                    () const;
        void                    SetReceptionNodTotal                    ( uint value );

        uint                    GetReceptionPacketTotal                 () const;
        void                    SetReceptionPacketTotal                 ( uint value );

        uint                    GetSendingDataRate                      () const;
        void                    SetSendingDataRate                      ( uint value );

        uint                    GetSendingNodTotal                      () const;
        void                    SetSendingNodTotal                      ( uint value );

        uint                    GetSendingPacketTotal                   () const;
        void                    SetSendingPacketTotal                   ( uint value );

        uint                    GetTCPReceivingDataRate                 () const;
        void                    SetTCPReceivingDataRate                 ( uint value );

        uint                    GetTCPReceptionNodTotal                 () const;
        void                    SetTCPReceptionNodTotal                 ( uint value );

        uint                    GetTCPReceptionPacketTotal              () const;
        void                    SetTCPReceptionPacketTotal              ( uint value );

        uint                    GetTCPSendingDataRate                   () const;
        void                    SetTCPSendingDataRate                   ( uint value );

        uint                    GetTCPSendingNodTotal                   () const;
        void                    SetTCPSendingNodTotal                   ( uint value );

        uint                    GetTCPSendingPacketTotal                () const;
        void                    SetTCPSendingPacketTotal                ( uint value );

        float                   GetTimeCorrectionWeight                 () const;
        void                    SetTimeCorrectionWeight                 ( float value );

        float                   GetTimeLatestEpsilon                    () const;
        void                    SetTimeLatestEpsilon                    ( float value );

        int                     GetTimeLatestGamePing                   () const;
        void                    SetTimeLatestGamePing                   ( int value );

        int                     GetTimeLatestHumanPing                  () const;
        void                    SetTimeLatestHumanPing                  ( int value );

        uint                    GetTimeLookahead                        () const;
        void                    SetTimeLookahead                        ( uint value );

        bool                    GetTimeNotifyDiscontinuity              () const;
        void                    SetTimeNotifyDiscontinuity              ( bool value );

        float                   GetTimeSmoothedEpsilon                  () const;
        void                    SetTimeSmoothedEpsilon                  ( float value );

        float                   GetTimeSmoothing                        () const;
        void                    SetTimeSmoothing                        ( float value );

        float                   GetTimeThreshold                        () const;
        void                    SetTimeThreshold                        ( float value );

        uint                    GetUDPReceivingDataRate                 () const;
        void                    SetUDPReceivingDataRate                 ( uint value );

        uint                    GetUDPReceptionNodTotal                 () const;
        void                    SetUDPReceptionNodTotal                 ( uint value );

        uint                    GetUDPReceptionPacketTotal              () const;
        void                    SetUDPReceptionPacketTotal              ( uint value );

        uint                    GetUDPSendingDataRate                   () const;
        void                    SetUDPSendingDataRate                   ( uint value );

        uint                    GetUDPSendingNodTotal                   () const;
        void                    SetUDPSendingNodTotal                   ( uint value );

        uint                    GetUDPSendingPacketTotal                () const;
        void                    SetUDPSendingPacketTotal                ( uint value );

