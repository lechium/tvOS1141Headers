/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBSMediaRemoteServiceInterface.h>

@protocol _PBSMediaRemoteServiceInternalInterface;
@class NSMapTable, NSString;

@interface PBSMediaRemoteServiceProxy : NSObject <PBSMediaRemoteServiceInterface> {

	BOOL _volumeControlAvailable;
	int _volumeControlNotifyToken;
	id<_PBSMediaRemoteServiceInternalInterface> _remoteProxy;
	NSMapTable* _pendingCompletionHandlers;

}

@property (assign,nonatomic) int volumeControlNotifyToken;                                         //@synthesize volumeControlNotifyToken=_volumeControlNotifyToken - In the implementation block
@property (assign,nonatomic) BOOL volumeControlAvailable;                                          //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (nonatomic,retain) id<_PBSMediaRemoteServiceInternalInterface> remoteProxy;              //@synthesize remoteProxy=_remoteProxy - In the implementation block
@property (nonatomic,readonly) NSMapTable * pendingCompletionHandlers;                             //@synthesize pendingCompletionHandlers=_pendingCompletionHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_volumeControlAvailabilityStateForToken:(int)arg1 ;
-(void)dealloc;
-(id)showPinDialogWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissPinDialogWithToken:(id)arg1 ;
-(id<_PBSMediaRemoteServiceInternalInterface>)remoteProxy;
-(id)initWithRemoteServiceProxy:(id)arg1 ;
-(void)handleConnectionInterruption:(id)arg1 ;
-(NSMapTable *)pendingCompletionHandlers;
-(void)setRemoteProxy:(id<_PBSMediaRemoteServiceInternalInterface>)arg1 ;
-(void)startSiriWithContext:(id)arg1 ;
-(void)stopSiriWithContext:(id)arg1 ;
-(void)activateSiriWithContext:(id)arg1 ;
-(void)_handleVolumeControlAvailableDidChange;
-(int)volumeControlNotifyToken;
-(/*^block*/id)_removeCompletionHandlerForToken:(id)arg1 ;
-(void)_addCompletionHandler:(/*^block*/id)arg1 forToken:(id)arg2 ;
-(void)noteUserPresenceDetected;
-(void)setVolumeControlNotifyToken:(int)arg1 ;
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(BOOL)volumeControlAvailable;
@end
