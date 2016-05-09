        enum { CLASSID = 0x1200F000 };

        static CNetConnection*  CreateInstance ();

        bool                    GetBroken                               () const;
        void                    SetBroken                               ( bool value );

        bool                    GetCanReceiveTCP                        () const;
        void                    SetCanReceiveTCP                        ( bool value );

        bool                    GetCanReceiveUDP                        () const;
        void                    SetCanReceiveUDP                        ( bool value );

        bool                    GetCanSendTCP                           () const;
        void                    SetCanSendTCP                           ( bool value );

        bool                    GetCanSendUDP                           () const;
        void                    SetCanSendUDP                           ( bool value );

        bool                    GetClientToServer                       () const;
        void                    SetClientToServer                       ( bool value );

        bool                    GetConnected                            () const;
        void                    SetConnected                            ( bool value );

        bool                    GetConnectionRequest                    () const;
        void                    SetConnectionRequest                    ( bool value );

        bool                    GetConnectionTCP                        () const;
        void                    SetConnectionTCP                        ( bool value );

        bool                    GetConnectionWaiting                    () const;
        void                    SetConnectionWaiting                    ( bool value );

        class CMwNod*           GetInfo                                 () const;
        void                    SetInfo                                 ( class CMwNod* value );

        bool                    GetIsTCPSaturated                       () const;
        void                    SetIsTCPSaturated                       ( bool value );

        uint                    GetLatestNetworkActivity                () const;
        void                    SetLatestNetworkActivity                ( uint value );

        uint                    GetLatestUDPActivity                    () const;
        void                    SetLatestUDPActivity                    ( uint value );

        uint                    GetReceptionCounter                     () const;
        void                    SetReceptionCounter                     ( uint value );

        uint                    GetReceptionNodTotal                    () const;
        void                    SetReceptionNodTotal                    ( uint value );

        uint                    GetReceptionPacketLoss                  () const;
        void                    SetReceptionPacketLoss                  ( uint value );

        uint                    GetReceptionPacketTotal                 () const;
        void                    SetReceptionPacketTotal                 ( uint value );

        uint                    GetReceptionPacketTotalWithoutLoss      () const;
        void                    SetReceptionPacketTotalWithoutLoss      ( uint value );

        uint                    GetSendingCounter                       () const;
        void                    SetSendingCounter                       ( uint value );

        uint                    GetSendingNodTotal                      () const;
        void                    SetSendingNodTotal                      ( uint value );

        uint                    GetSendingPacketTotal                   () const;
        void                    SetSendingPacketTotal                   ( uint value );

        uint                    GetState                                () const;
        void                    SetState                                ( uint value );

        bool                    GetSynchronisation                      () const;
        void                    SetSynchronisation                      ( bool value );

        uint                    GetTCPEmissionQueue                     () const;
        void                    SetTCPEmissionQueue                     ( uint value );

        uint                    GetTCPPort                              () const;
        void                    SetTCPPort                              ( uint value );

        uint                    GetTCPReceptionNodTotal                 () const;
        void                    SetTCPReceptionNodTotal                 ( uint value );

        uint                    GetTCPReceptionPacketTotal              () const;
        void                    SetTCPReceptionPacketTotal              ( uint value );

        uint                    GetTCPSendingNodTotal                   () const;
        void                    SetTCPSendingNodTotal                   ( uint value );

        uint                    GetTCPSendingPacketTotal                () const;
        void                    SetTCPSendingPacketTotal                ( uint value );

        bool                    GetTestingUDP                           () const;
        void                    SetTestingUDP                           ( bool value );

        uint                    GetUDPPort                              () const;
        void                    SetUDPPort                              ( uint value );

        uint                    GetUDPReceptionNodTotal                 () const;
        void                    SetUDPReceptionNodTotal                 ( uint value );

        uint                    GetUDPReceptionPacketTotal              () const;
        void                    SetUDPReceptionPacketTotal              ( uint value );

        uint                    GetUDPSendingNodTotal                   () const;
        void                    SetUDPSendingNodTotal                   ( uint value );

        uint                    GetUDPSendingPacketTotal                () const;
        void                    SetUDPSendingPacketTotal                ( uint value );

        bool                    GetWasUDPPacketDropped                  () const;
        void                    SetWasUDPPacketDropped                  ( bool value );

        void                    Disconnect                              ();
