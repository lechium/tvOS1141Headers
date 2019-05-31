/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSDisplayObserving.h>

@protocol FBDisplayLayoutDelegate;
@class FBSDisplayIdentity, FBSDisplayLayout, FBSDisplayLayoutTransitionContext, NSMutableSet, NSString;

@interface FBDisplayLayout : NSObject <FBSDisplayObserving> {

	long long _displayType;
	FBSDisplayIdentity* _displayIdentity;
	long long _backlightLevel;
	long long _interfaceOrientation;
	FBSDisplayLayout* _currentLayout;
	FBSDisplayLayoutTransitionContext* _currentTransitionContext;
	id<FBDisplayLayoutDelegate> _delegate;
	NSMutableSet* _assertions;
	NSMutableSet* _transitions;
	BOOL _transitionActive;
	int _displayBacklightToken;

}

@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) long long displayType;                                                            //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;                                                   //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,retain,readonly) FBSDisplayLayout * currentLayout;                                          //@synthesize currentLayout=_currentLayout - In the implementation block
@property (nonatomic,retain,readonly) FBSDisplayLayoutTransitionContext * currentTransitionContext;              //@synthesize currentTransitionContext=_currentTransitionContext - In the implementation block
@property (nonatomic,readonly) id<FBDisplayLayoutDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBDisplayLayoutDelegate>)delegate;
-(void)dealloc;
-(long long)interfaceOrientation;
-(void)flush;
-(BOOL)isTransitioning;
-(long long)displayType;
-(FBSDisplayLayout *)currentLayout;
-(void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2 ;
-(void)beginTransition:(id)arg1 ;
-(void)endTransition:(id)arg1 ;
-(void)addElementAssertion:(id)arg1 ;
-(void)updateElementAssertion:(id)arg1 ;
-(void)removeElementAssertion:(id)arg1 ;
-(id)initWithDisplayType:(long long)arg1 delegate:(id)arg2 ;
-(FBSDisplayLayoutTransitionContext *)currentTransitionContext;
-(void)_registerForBacklightUpdates;
-(void)_updateTransitionContextForTransition:(id)arg1 ;
-(void)_updateStateForTransition:(id)arg1 ;
-(void)_sendLayoutIfNotTransitioning;
-(void)_buildAndSendLayout:(BOOL)arg1 ;
-(void)_bgQueue_updateBacklightLevelAndNotify:(BOOL)arg1 ;
-(void)_updateBacklightLevel:(long long)arg1 notify:(BOOL)arg2 ;
-(BOOL)_isReallyTransitioning;
@end

