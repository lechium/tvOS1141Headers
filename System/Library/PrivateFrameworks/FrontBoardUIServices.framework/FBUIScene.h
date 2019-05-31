/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUISceneContentManager.h>
#import <libobjc.A.dylib/FBUISceneSurrogate.h>

@protocol FBUISceneHostProxy, FBUISceneClientProxy, FBUISceneUpdater, FBUISceneDelegate;
@class NSString, FBSSceneSpecification, FBSSceneSettings, FBSSceneClientSettings, FBUISceneWorkspace, UIView, NSMutableArray;

@interface FBUIScene : NSObject <FBUISceneContentManager, FBUISceneSurrogate> {

	NSString* _name;
	NSString* _identifier;
	FBSSceneSpecification* _specification;
	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;
	FBUISceneWorkspace* _workspace;
	id<FBUISceneHostProxy> _sceneHost;
	id<FBUISceneClientProxy> _sceneClient;
	id<FBUISceneUpdater> _sceneUpdater;
	id<FBUISceneDelegate> _delegate;
	UIView* _contentView;
	NSMutableArray* _pendingUpdateBlocks;
	BOOL _activated;
	BOOL _deactivating;
	BOOL _invalidated;
	unsigned long long _layerCount;

}

@property (nonatomic,copy) FBSSceneSettings * settings;                                        //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy) FBSSceneClientSettings * clientSettings;                            //@synthesize clientSettings=_clientSettings - In the implementation block
@property (__weak) id<FBUISceneHostProxy> sceneHost;                                           //@synthesize sceneHost=_sceneHost - In the implementation block
@property (retain) id<FBUISceneClientProxy> sceneClient;                                       //@synthesize sceneClient=_sceneClient - In the implementation block
@property (assign,nonatomic,__weak) FBUISceneWorkspace * workspace;                            //@synthesize workspace=_workspace - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification;                     //@synthesize specification=_specification - In the implementation block
@property (assign,nonatomic,__weak) id<FBUISceneDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) id<FBUISceneContentManager> contentManager; 
@property (getter=isActivated,nonatomic,readonly) BOOL activated;                              //@synthesize activated=_activated - In the implementation block
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;                          //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasContent; 
-(id)init;
-(void)invalidate;
-(id<FBUISceneDelegate>)delegate;
-(void)setDelegate:(id<FBUISceneDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(FBSSceneSettings *)settings;
-(NSString *)identifier;
-(void)sendActions:(id)arg1 ;
-(id)contentView;
-(void)deactivate;
-(BOOL)hasContent;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(id)configure;
-(FBSSceneClientSettings *)clientSettings;
-(BOOL)isInvalidated;
-(void)_performSceneUpdate:(/*^block*/id)arg1 ;
-(void)updateSettingsWithTransitionBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isReallyActive;
-(void)_performPendingUpdates;
-(id)initWithName:(id)arg1 identifier:(id)arg2 specification:(id)arg3 ;
-(id<FBUISceneContentManager>)contentManager;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setClientSettings:(FBSSceneClientSettings *)arg1 ;
-(FBSSceneSpecification *)specification;
-(void)setSceneClient:(id<FBUISceneClientProxy>)arg1 ;
-(id<FBUISceneClientProxy>)sceneClient;
-(void)didInvalidateSceneHost:(id)arg1 ;
-(void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sceneHost:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)sceneSpecification;
-(void)sceneClient:(id)arg1 didAttachLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didUpdateLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didDetachLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneClient:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)didInvalidateSceneClient:(id)arg1 ;
-(void)setSceneHost:(id<FBUISceneHostProxy>)arg1 ;
-(id<FBUISceneHostProxy>)sceneHost;
-(FBUISceneWorkspace *)workspace;
-(void)sceneHost:(id)arg1 registerSceneClient:(id)arg2 withInitialParameters:(id)arg3 ;
-(void)registerSceneUpdater:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)sceneIdentifier;
-(void)setWorkspace:(FBUISceneWorkspace *)arg1 ;
-(BOOL)isActivated;
@end

