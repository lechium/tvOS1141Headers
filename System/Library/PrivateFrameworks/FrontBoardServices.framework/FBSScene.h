/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSSceneUpdaterDelegate.h>
#import <libobjc.A.dylib/FBSSceneLayerDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, FBSSceneSettings, FBSSceneClientSettings, NSArray;

@interface FBSScene : NSObject <FBSSceneUpdaterDelegate, FBSSceneLayerDelegate, BSDescriptionProviding>

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (assign,nonatomic,__weak) id<FBSSceneDelegate> delegate; 
@property (nonatomic,retain,readonly) FBSSceneSettings * settings; 
@property (nonatomic,retain,readonly) FBSSceneClientSettings * clientSettings; 
@property (nonatomic,retain,readonly) NSArray * layers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(BOOL)sceneLayerShouldObserveUpdates:(id)arg1 ;
-(void)sceneLayerDidUpdate:(id)arg1 ;
-(void)sceneLayerDidInvalidate:(id)arg1 ;
-(BOOL)_hasAgent;
-(void)_didCreateWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_willDestroyWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)invalidate;
-(id<FBSSceneDelegate>)delegate;
-(void)setDelegate:(id<FBSSceneDelegate>)arg1 ;
-(id)_init;
-(FBSSceneSettings *)settings;
-(NSString *)identifier;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithCallOutQueue:(id)arg1 identifier:(id)arg2 parameters:(id)arg3 ;
-(void)sendActions:(id)arg1 ;
-(BOOL)invalidateSnapshotWithContext:(id)arg1 ;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
-(NSArray *)layers;
-(id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5 ;
-(id)fbsDisplay;
-(id)display;
-(void)attachLayer:(id)arg1 ;
-(void)detachLayer:(id)arg1 ;
-(void)attachContext:(id)arg1 ;
-(void)detachContext:(id)arg1 ;
-(FBSSceneClientSettings *)clientSettings;
-(void)updateClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(id)contexts;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)updater:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)attachSceneContext:(id)arg1 ;
-(void)detachSceneContext:(id)arg1 ;
-(id)snapshotRequest;
@end

