/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>
#import <libobjc.A.dylib/FBSceneManagerObserver.h>
#import <libobjc.A.dylib/FBSynchronizedTransaction.h>

@protocol FBSynchronizedTransactionDelegate;
@class FBSceneManager, NSString, FBSSceneDefinition, FBSSceneParameters, FBSSceneTransitionContext, FBWaitForSceneDestructionTransaction, FBScene, FBSSceneSettings, FBSSceneSpecification;

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneManagerObserver, FBSynchronizedTransaction> {

	FBSceneManager* _sceneManager;
	NSString* _sceneID;
	FBSSceneDefinition* _definition;
	FBSSceneParameters* _parameters;
	FBSSceneTransitionContext* _transitionContext;
	FBWaitForSceneDestructionTransaction* _destructionTransaction;
	id<FBSynchronizedTransactionDelegate> _synchronizationDelegate;
	unsigned long long _transactionID;
	BOOL _waitsForSceneCommit;
	BOOL _readyToCommit;
	BOOL _didCommit;
	BOOL _destroyed;

}

@property (nonatomic,retain,readonly) FBScene * scene; 
@property (nonatomic,retain,readonly) NSString * sceneIdentifier;                                               //@synthesize sceneID=_sceneID - In the implementation block
@property (nonatomic,retain,readonly) FBSSceneSettings * settings; 
@property (nonatomic,retain,readonly) FBSSceneSpecification * specification; 
@property (nonatomic,retain,readonly) FBSSceneTransitionContext * transitionContext;                            //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) BOOL destroyed;                                                                  //@synthesize destroyed=_destroyed - In the implementation block
@property (assign,nonatomic) BOOL waitsForSceneCommit;                                                          //@synthesize waitsForSceneCommit=_waitsForSceneCommit - In the implementation block
@property (nonatomic,retain,readonly) FBSSceneSettings * newSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;              //@synthesize synchronizationDelegate=_synchronizationDelegate - In the implementation block
-(void)dealloc;
-(FBSSceneTransitionContext *)transitionContext;
-(FBSSceneSettings *)settings;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(FBScene *)scene;
-(void)setWaitsForSceneCommit:(BOOL)arg1 ;
-(FBSSceneSpecification *)specification;
-(id)initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(void)_didComplete;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3 ;
-(void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 success:(BOOL)arg4 ;
-(id)_initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3 ;
-(void)_commitSceneUpdate:(/*^block*/id)arg1 ;
-(id<FBSynchronizedTransactionDelegate>)synchronizationDelegate;
-(void)performSynchronizedCommit;
-(void)_createScene;
-(void)_updateScene;
-(void)_commitSceneOrWait;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_didInterruptWithReason:(id)arg1 ;
-(void)_enumerateUpdateSceneObserversWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isReadyForSynchronizedCommit;
-(void)_performCommit;
-(void)setSynchronizationDelegate:(id<FBSynchronizedTransactionDelegate>)arg1 ;
-(id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 display:(id)arg3 newSettings:(id)arg4 transitionContext:(id)arg5 clientProviderProvider:(/*^block*/id)arg6 initialClientSettingsProvider:(/*^block*/id)arg7 ;
-(id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 parameters:(id)arg3 transitionContext:(id)arg4 ;
-(id)initWithSceneToUpdate:(id)arg1 newSettings:(id)arg2 transitionContext:(id)arg3 ;
-(FBSSceneSettings *)newSettings;
-(BOOL)destroyed;
-(BOOL)waitsForSceneCommit;
-(void)_begin;
-(NSString *)sceneIdentifier;
@end
