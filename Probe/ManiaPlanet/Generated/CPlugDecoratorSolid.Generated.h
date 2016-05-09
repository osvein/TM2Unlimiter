        enum { CLASSID = 0x090A3000 };

        static CPlugDecoratorSolid* CreateInstance ();

        List < nodptr<class CPlugDecoratorTree> >& GetTreeDecorators                       () const;
        void                    SetTreeDecorators                       ( List < nodptr<class CPlugDecoratorTree> >& value );

