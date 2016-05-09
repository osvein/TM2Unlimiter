        enum { CLASSID = 0x2C01E000 };

        static CQmRuleEvent*    CreateInstance ();

        class CQmActor*         GetActor                                () const;
        void                    SetActor                                ( class CQmActor* value );

        class CGameAttributes*  GetAttributes                           () const;
        void                    SetAttributes                           ( class CGameAttributes* value );

        class CQmBoard*         GetBoard                                () const;
        void                    SetBoard                                ( class CQmBoard* value );

        uint                    GetDebugNatural                         () const;
        void                    SetDebugNatural                         ( uint value );

        uint                    GetDuration                             () const;
        void                    SetDuration                             ( uint value );

        uint                    GetFinishTime                           () const;
        void                    SetFinishTime                           ( uint value );

        bool                    GetIsInternal                           () const;
        void                    SetIsInternal                           ( bool value );

        uint                    GetNextTime                             () const;
        void                    SetNextTime                             ( uint value );

        bool                    GetOnCancelResult                       () const;
        void                    SetOnCancelResult                       ( bool value );

        uint                    GetPeriod                               () const;
        void                    SetPeriod                               ( uint value );

        class CQmPlayer*        GetPlayer                               () const;
        void                    SetPlayer                               ( class CQmPlayer* value );

        uint                    GetPreparation                          () const;
        void                    SetPreparation                          ( uint value );

        class CQmPlaygroundRulesManager* GetRulesManager                         () const;
        void                    SetRulesManager                         ( class CQmPlaygroundRulesManager* value );

        bool                    GetShowInHistory                        () const;
        void                    SetShowInHistory                        ( bool value );

        class CQmBoardSquare*   GetSquare                               () const;
        void                    SetSquare                               ( class CQmBoardSquare* value );

        uint                    GetState                                () const;
        void                    SetState                                ( uint value );

        bool                    GetSuccess                              () const;
        void                    SetSuccess                              ( bool value );

        bool                    ActivateRandomActionCard                ( class CQmPlayer* pPlayer, class CQmActor* pActor, StringA strFromList, StringA strToList );
        bool                    ActivateRandomEffectCard                ( class CQmPlayer* pPlayer, class CQmActor* pActor, class CQmActor* pTarget, StringA strFromList, StringA strToList );
        bool                    AddActionsToChoice                      ( class CQmActor* pActor, StringA strDeck );
        int                     AddRelDirStringToDir                    ( int iSrcDir, StringA strRelDir );
        int                     AddRelDirToDir                          ( int iSrcDir, int iRelDir );
        void                    AddVisualEffectAttack                   ( class CQmActor* pActor, int iDirection, int iDuration );
        void                    AddVisualEffectBonusText                ( class CQmActor* pActor, int iValue, StringA strIcon, int iDuration );
        void                    AddVisualEffectDoorClose                ( class CQmActor* pActor, int iDuration );
        void                    AddVisualEffectDoorOpen                 ( class CQmActor* pActor, int iDuration );
        void                    AddVisualEffectHit                      ( class CQmActor* pActor, int iDuration );
        void                    AddVisualEffectMalusText                ( class CQmActor* pActor, int iValue, StringA strIcon, int iDuration );
        void                    AddVisualEffectScreenFadeIn             ( int iDuration );
        void                    AddVisualEffectScreenFadeOut            ( int iDuration );
        void                    AddVisualEffectWait                     ( int iDuration );
        bool                    ApplyDamage                             ( class CQmActor* pActor, int iDamage );
        bool                    CallScript                              ( StringA strName );
        bool                    CancelAppliedEffects                    ( class CQmActor* pActor, StringA strName );
        bool                    CancelApplyingEffects                   ( class CQmActor* pActor, StringA strName );
        int                     CreateActorInInventory                  ( class CQmActor* pOwner, StringA strActorName );
        bool                    CreateRuleAction                        ( StringA strName, class CQmPlayer* pPlayer, class CQmActor* pActor );
        bool                    CreateRuleEffect                        ( StringA strName, class CQmPlayer* pPlayer, class CQmActor* pActor, class CQmActor* pTarget );
        bool                    DrawCard                                ( class CQmPlayer* pPlayer, StringA strFromList, StringA strToList, StringA strFillList, int iCardCount );
        int                     FindSquareWithCard                      ( StringA strCardName, int iFromSquareIndex, bool bCanLoop );
        int                     GetCardCount                            ( StringA strListId );
        int                     GetDirectionBetweenActors               ( class CQmActor* pFirstActor, class CQmActor* pSecondActor );
        int                     GetDirectionBetweenSquares              ( class CQmBoardSquare* pFirstSquare, class CQmBoardSquare* pSecondSquare );
        float                   GetDistanceBetweenActors                ( class CQmActor* pFirstActor, class CQmActor* pSecondActor );
        float                   GetDistanceBetweenSquares               ( class CQmBoardSquare* pFirstSquare, class CQmBoardSquare* pSecondSquare );
        int                     GetNeighbourSquare                      ( class CQmBoardSquare* pSquare, int iDirection );
        int                     GetOpposedDir                           ( int iSrcDir );
        bool                    GetPlayerCardEventListId                ( class CQmPlayer* pPlayer, StringA strListId );
        int                     GetRelativeSquare                       ( class CQmActor* pActor, int iDirection, int iCount );
        int                     GetSquareIndex                          ( class CQmBoardSquare* pSquare );
        float                   GetSquareSize                           ();
        bool                    MoveActorOnSquare                       ( class CQmPlayer* pPlayer, class CQmActor* pActor, class CQmBoardSquare* pSquare, int iDirection, bool bActivateEvents, bool bForceNewMove );
        int                     RandNat                                 ( int iMin, int iMax );
        bool                    RemoveActor                             ( class CQmActor* pActor );
        bool                    RemoveActorFromInventory                ( class CQmActor* pOwner, class CQmActor* pActor );
        bool                    SetActionChoices                        ( class CQmActor* pActor, StringA strDeck );
        bool                    SetActionChoicesName                    ( class CQmActor* pActor, StringA strName );
        bool                    SetPlayerCheckpoint                     ( class CQmPlayer* pPlayer );
        bool                    TransferActorFromInventory              ( class CQmActor* pOwner, class CQmActor* pActor );
        bool                    TransferActorToInventory                ( class CQmActor* pOwner, class CQmActor* pActor );
        bool                    TransferAllCards                        ( StringA strFromList, StringA strToList );
        bool                    TransferCard                            ( StringA strFromList, StringA strCard, StringA strToList );
        bool                    TransferCards                           ( StringA strFromList, int iFromCardIndex, StringA strToList, int iToCardIndex, int iCardCount );
        bool                    TransferRandomCard                      ( StringA strFromList, StringA strToList );
        bool                    TransferRandomCards                     ( StringA strFromList, StringA strToList, int iNbCards );
