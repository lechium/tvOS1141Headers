/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSSceneSettings, FBSSceneTransitionContext, FBSceneUpdateContext, NSString;

@interface FBProcessWatchdogEventContext : NSObject <BSDescriptionProviding> {

	long long _event;
	FBSSceneSettings* _sceneSettings;
	FBSSceneTransitionContext* _sceneTransitionContext;
	FBSceneUpdateContext* _sceneUpdateContext;

}

@property (nonatomic,readonly) long long event;                                                        //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) FBSceneUpdateContext * sceneUpdateContext;                              //@synthesize sceneUpdateContext=_sceneUpdateContext - In the implementation block
@property (nonatomic,readonly) FBSSceneSettings * sceneSettings;                                       //@synthesize sceneSettings=_sceneSettings - In the implementation block
@property (nonatomic,__weak,readonly) FBSSceneTransitionContext * sceneTransitionContext;              //@synthesize sceneTransitionContext=_sceneTransitionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextForEvent:(long long)arg1 settings:(id)arg2 transitionContext:(id)arg3 ;
-(void)dealloc;
-(NSString *)description;
-(long long)event;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBSSceneSettings *)sceneSettings;
-(FBSSceneTransitionContext *)sceneTransitionContext;
-(FBSceneUpdateContext *)sceneUpdateContext;
@end

