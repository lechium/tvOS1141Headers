/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, MRAVOutputDeviceSourceInfo, NSMutableArray, NSObject, NSString, AVOutputContext;

@interface MRAVOutputContext : NSObject {

	NSArray* _outputDevices;
	MRAVOutputDeviceSourceInfo* _outputDeviceSourceInfo;
	NSMutableArray* _pendingModifications;
	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned _type;
	NSString* _uniqueIdentifier;
	AVOutputContext* _avOutputContext;

}

@property (nonatomic,copy) NSArray * outputDevices; 
@property (nonatomic,readonly) unsigned type;                                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) AVOutputContext * avOutputContext;                                        //@synthesize avOutputContext=_avOutputContext - In the implementation block
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (assign,nonatomic) float volume; 
+(id)sharedSystemAudioContext;
+(id)sharedSystemScreenContext;
+(id)createOutputContextWithUniqueIdentifier:(id)arg1 ;
+(id)sharedAudioPresentationContext;
-(void)setOutputDevices:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)type;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(NSString *)uniqueIdentifier;
-(void)addOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)removeOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithAVOutputContext:(id)arg1 type:(unsigned)arg2 ;
-(void)_reloadOutputDevices;
-(void)setOutputDevices:(id)arg1 withPassword:(id)arg2 callbackQueue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_commitModification:(id)arg1 ;
-(void)_clearAnyCompletedModifications;
-(void)_outputContextChangeInitiatedNotification:(id)arg1 ;
-(void)_handleOutputContextVolumeDidChangeNotification:(id)arg1 ;
-(void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1 ;
-(BOOL)_contextSupportsMultipleDevices;
-(id)_pendingModifications;
-(id)localDevice;
-(void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(AVOutputContext *)avOutputContext;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(NSArray *)outputDevices;
-(BOOL)isVolumeControlAvailable;
-(void)_outputDevicesDidChangeNotification:(id)arg1 ;
@end

