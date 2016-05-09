        enum { CLASSID = 0x07015000 };

        static CControlGrid*    CreateInstance ();

        Array < Vec2D >&        GetChildsSquares                        () const;
        void                    SetChildsSquares                        ( Array < Vec2D >& value );

        Array < StringA >&      GetChildsSquaresParam                   () const;
        void                    SetChildsSquaresParam                   ( Array < StringA >& value );

        float                   GetForceColumnsUniformWidth             () const;
        void                    SetForceColumnsUniformWidth             ( float value );

        List < float >&         GetForceColumnsWidths                   () const;
        void                    SetForceColumnsWidths                   ( List < float >& value );

        float                   GetForceRowsUniformHeight               () const;
        void                    SetForceRowsUniformHeight               ( float value );

        float                   GetHorizontalSkewOffset                 () const;
        void                    SetHorizontalSkewOffset                 ( float value );

        class CControlLayout*   GetMainLayout                           () const;
        void                    SetMainLayout                           ( class CControlLayout* value );

        bool                    GetPackEmptyRows                        () const;
        void                    SetPackEmptyRows                        ( bool value );

        bool                    GetResizeTextHeight                     () const;
        void                    SetResizeTextHeight                     ( bool value );

        bool                    GetResizeTextWidth                      () const;
        void                    SetResizeTextWidth                      ( bool value );

        float                   GetVerticalSkewOffset                   () const;
        void                    SetVerticalSkewOffset                   ( float value );

