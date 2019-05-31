/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/PBSExternalControlSystemDelegate.h>

@protocol PBSExternalControlIRLearningManagerDelegate;
@class PBSExternalControlSystem, PBSExternalControlIRLearningConfiguration, NSMutableSet, NSTimer, NSString;

@interface PBSExternalControlIRLearningManager : NSObject <PBSExternalControlSystemDelegate> {

	struct {
		unsigned isAttemptingToStartLearning : 1;
		unsigned didFinishLearningCurrentAction : 1;
	}  _flags;
	BOOL _learningInProgress;
	int _currentAction;
	PBSExternalControlSystem* _externalControlSystem;
	PBSExternalControlIRLearningConfiguration* _configuration;
	id<PBSExternalControlIRLearningManagerDelegate> _delegate;
	NSMutableSet* _learnedActions;
	NSTimer* _waitTimer;

}

@property (nonatomic,retain) PBSExternalControlSystem * externalControlSystem;                             //@synthesize externalControlSystem=_externalControlSystem - In the implementation block
@property (nonatomic,retain) PBSExternalControlIRLearningConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (assign,getter=isLearningInProgress,nonatomic) BOOL learningInProgress;                          //@synthesize learningInProgress=_learningInProgress - In the implementation block
@property (assign,nonatomic) int currentAction;                                                            //@synthesize currentAction=_currentAction - In the implementation block
@property (nonatomic,retain) NSMutableSet * learnedActions;                                                //@synthesize learnedActions=_learnedActions - In the implementation block
@property (nonatomic,retain) NSTimer * waitTimer;                                                          //@synthesize waitTimer=_waitTimer - In the implementation block
@property (assign,nonatomic,__weak) id<PBSExternalControlIRLearningManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PBSExternalControlIRLearningManagerDelegate>)delegate;
-(void)setDelegate:(id<PBSExternalControlIRLearningManagerDelegate>)arg1 ;
-(void)dealloc;
-(int)currentAction;
-(void)setConfiguration:(PBSExternalControlIRLearningConfiguration *)arg1 ;
-(PBSExternalControlIRLearningConfiguration *)configuration;
-(void)setCurrentAction:(int)arg1 ;
-(void)_didCancel;
-(void)setLearningInProgress:(BOOL)arg1 ;
-(BOOL)isLearningInProgress;
-(PBSExternalControlSystem *)externalControlSystem;
-(NSMutableSet *)learnedActions;
-(void)_didStartLearning;
-(void)_waitTimerFired:(id)arg1 ;
-(void)setWaitTimer:(NSTimer *)arg1 ;
-(void)_didFailToStartLearningWithError:(id)arg1 ;
-(void)_didSaveLearnedActions:(id)arg1 forDeviceWithUUID:(id)arg2 ;
-(BOOL)_canMoveFromCurrentActionToAction:(int)arg1 ;
-(void)saveLearningWithCompletion:(/*^block*/id)arg1 ;
-(NSTimer *)waitTimer;
-(void)startLearningForConfiguration:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)externalControlSystem:(id)arg1 didFinishLearningAction:(int)arg2 ;
-(void)externalControlSystem:(id)arg1 didChangeReadyStatus:(BOOL)arg2 ;
-(void)externalControlSystem:(id)arg1 willStartLearningAction:(int)arg2 ;
-(void)externalControlSystem:(id)arg1 didLearnAction:(int)arg2 withProgress:(double)arg3 ;
-(void)externalControlSystem:(id)arg1 didCompleteLearningAction:(int)arg2 withResult:(BOOL)arg3 error:(id)arg4 ;
-(void)cancelLearningWithCompletion:(/*^block*/id)arg1 ;
-(void)learnPreviousActionWithCompletion:(/*^block*/id)arg1 ;
-(void)learnNextActionWithCompletion:(/*^block*/id)arg1 ;
-(void)relearnCurrentActionWithCompletion:(/*^block*/id)arg1 ;
-(void)setExternalControlSystem:(PBSExternalControlSystem *)arg1 ;
-(void)setLearnedActions:(NSMutableSet *)arg1 ;
@end

