/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol FBSDisplayObserving;
@class NSHashTable, CADisplay, FBSDisplayStatus, NSMapTable, FBSDisplayIdentity, FBSDisplayConfiguration, NSSet, NSString;

@interface FBSDisplayMonitor : NSObject <BSInvalidatable> {

	id<FBSDisplayObserving> _bookendObserver;
	NSHashTable* _observers;
	CADisplay* _mainDisplay;
	FBSDisplayStatus* _mainDisplayStatus;
	NSMapTable* _statusByDisplay;

}

@property (assign,nonatomic,__weak) id<FBSDisplayObserving> bookendObserver;                  //@synthesize bookendObserver=_bookendObserver - In the implementation block
@property (nonatomic,copy,readonly) FBSDisplayIdentity * mainIdentity; 
@property (nonatomic,copy,readonly) FBSDisplayConfiguration * mainConfiguration; 
@property (nonatomic,copy,readonly) NSSet * connectedIdentities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateDisplaysIfNecessary;
-(void)_enumerateConnectedWithBlock:(/*^block*/id)arg1 ;
-(void)_noteConnectStatus:(id)arg1 withConfiguration:(id)arg2 debounce:(BOOL)arg3 broadcast:(BOOL)arg4 ;
-(void)_noteUpdateStatus:(id)arg1 withConfiguration:(id)arg2 ;
-(void)_noteDisconnectStatus:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(FBSDisplayIdentity *)mainIdentity;
-(FBSDisplayConfiguration *)mainConfiguration;
-(void)_invalidate;
-(id)initWithInitializationCompletion:(/*^block*/id)arg1 ;
-(id)configurationForIdentity:(id)arg1 ;
-(void)setBookendObserver:(id<FBSDisplayObserving>)arg1 ;
-(id<FBSDisplayObserving>)bookendObserver;
-(NSSet *)connectedIdentities;
@end

