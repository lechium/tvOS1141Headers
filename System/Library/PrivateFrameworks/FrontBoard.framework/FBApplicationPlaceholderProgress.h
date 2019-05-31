/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBApplicationPlaceholderProgress.h>

@protocol FBApplicationPlaceholderProgress
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) double percentComplete; 
@required
-(double)percentComplete;
-(long long)state;

@end

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSProgress, FBApplicationPlaceholder, NSString;

@interface FBApplicationPlaceholderProgress : NSObject <FBApplicationPlaceholderProgress, BSInvalidatable, BSDescriptionProviding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSProgress* _progress;
	int _invalidated;
	long long _cancellationAllowed;
	long long _state;
	double _percentComplete;
	unsigned long long _installPhase;
	unsigned long long _installState;
	FBApplicationPlaceholder* _placeholder;

}

@property (nonatomic,__weak,readonly) FBApplicationPlaceholder * placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,readonly) unsigned long long installState;                            //@synthesize installState=_installState - In the implementation block
@property (nonatomic,readonly) unsigned long long installPhase;                            //@synthesize installPhase=_installPhase - In the implementation block
@property (nonatomic,readonly) long long state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double percentComplete;                                     //@synthesize percentComplete=_percentComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)dealloc;
-(NSString *)description;
-(double)percentComplete;
-(long long)state;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(FBApplicationPlaceholder *)placeholder;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithPlaceholder:(id)arg1 queue:(id)arg2 ;
-(BOOL)queue_isValid;
-(unsigned long long)queue_supportedActions;
-(BOOL)queue_canPerformAction:(unsigned long long)arg1 ;
-(BOOL)queue_updateProxy:(id)arg1 ;
-(void)_stopObservingProgress:(id)arg1 withContext:(void*)arg2 ;
-(void)_startObservingProgress:(id)arg1 withContext:(void*)arg2 ;
-(BOOL)_queue_updateFromProgress;
-(BOOL)queue_isCancellationAllowed;
-(unsigned long long)installState;
-(unsigned long long)installPhase;
@end

