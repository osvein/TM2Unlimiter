        enum { CLASSID = 0x1200C000 };

        static CNetServer*      CreateInstance ();

        bool                    GetAcceptConnections                    () const;
        void                    SetAcceptConnections                    ( bool value );

        uint                    GetNbrConnections                       () const;
        void                    SetNbrConnections                       ( uint value );

        uint                    GetNbrConnectionsDisconnecting          () const;
        void                    SetNbrConnectionsDisconnecting          ( uint value );

        uint                    GetNbrConnectionsDone                   () const;
        void                    SetNbrConnectionsDone                   ( uint value );

        uint                    GetNbrConnectionsPending                () const;
        void                    SetNbrConnectionsPending                ( uint value );

        uint                    GetNbrNewConnections                    () const;
        void                    SetNbrNewConnections                    ( uint value );

        uint                    GetP2PPort                              () const;
        void                    SetP2PPort                              ( uint value );

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

