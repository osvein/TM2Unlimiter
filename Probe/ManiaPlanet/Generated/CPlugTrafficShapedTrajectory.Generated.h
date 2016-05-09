        enum { CLASSID = 0x090DD000 };

        static CPlugTrafficShapedTrajectory* CreateInstance ();

        uint                    GetAllocatedSize                        () const;
        void                    SetAllocatedSize                        ( uint value );

        bool                    GetClosed                               () const;
        void                    SetClosed                               ( bool value );

        float                   GetLength                               () const;
        void                    SetLength                               ( float value );

        uint                    GetPointsCount                          () const;
        void                    SetPointsCount                          ( uint value );

