/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TLAlertPlaybackObserver;
@class TLAlertConfiguration, NSString;

@interface TLAlert : NSObject {

	long long _instanceIndex;
	id<TLAlertPlaybackObserver> _playbackObserver;
	TLAlertConfiguration* _configuration;
	long long _type;
	NSString* _toneIdentifier;
	NSString* _vibrationIdentifier;

}

@property (assign,nonatomic,__weak) id<TLAlertPlaybackObserver> playbackObserver;              //@synthesize playbackObserver=_playbackObserver - In the implementation block
@property (nonatomic,readonly) TLAlertConfiguration * configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) long long type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * toneIdentifier;                                      //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * vibrationIdentifier;                                 //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
+(void)playAlertForType:(long long)arg1 ;
+(void)playToneAndVibrationForType:(long long)arg1 ;
+(BOOL)_stopAllAlerts;
+(id)alertWithConfiguration:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)stop;
-(TLAlertConfiguration *)configuration;
-(NSString *)vibrationIdentifier;
-(NSString *)toneIdentifier;
-(id)initWithType:(long long)arg1 accountIdentifier:(id)arg2 ;
-(id)initWithType:(long long)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ;
-(BOOL)playWithCompletionHandler:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
-(id<TLAlertPlaybackObserver>)playbackObserver;
-(void)setPlaybackObserver:(id<TLAlertPlaybackObserver>)arg1 ;
-(id)_initWithConfiguration:(id)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ;
-(void)stopWithOptions:(id)arg1 ;
-(id)_descriptionForDebugging:(BOOL)arg1 ;
-(void)_updateAudioVolumeDynamicallyToValue:(float)arg1 ;
-(void)play;
-(void)playWithCompletionHandler:(/*^block*/id)arg1 ;
@end

