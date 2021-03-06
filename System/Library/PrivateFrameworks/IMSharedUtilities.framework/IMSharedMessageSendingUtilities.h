/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMSharedMessageSendingUtilities : NSObject {

	long long _serviceAvailability;

}

@property (assign) long long serviceAvailability;              //@synthesize serviceAvailability=_serviceAvailability - In the implementation block
+(id)sharedInstance;
+(void)initialize;
+(void)_setupAccountMonitor;
-(long long)serviceAvailability;
-(BOOL)isiMessageEnabled;
-(BOOL)_hasSMSCapability;
-(BOOL)_canSendText;
-(void)setServiceAvailability:(long long)arg1 ;
-(id)_managedConfigAppWhitelist;
-(void)_updateServiceAvailability;
-(BOOL)isMMSEnabled;
-(BOOL)_isiMessageSupported;
-(long long)_maxMMSAttachmentCount;
-(long long)_maxMMSMessageByteCount;
-(BOOL)canSendText;
-(BOOL)isSupportedAttachmentUTI:(id)arg1 ;
-(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3 ;
@end

