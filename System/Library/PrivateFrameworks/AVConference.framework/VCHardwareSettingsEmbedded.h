/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCHardwareSettings.h>
#import <libobjc.A.dylib/VCHardwareSettingsEmbeddedProtocol.h>

@class NSString;

@interface VCHardwareSettingsEmbedded : VCHardwareSettings <VCHardwareSettingsEmbeddedProtocol> {

	NSString* _deviceName;
	int _screenWidth;
	int _screenHeight;
	int _deviceClass;
	long long _chipId;
	long long _videoEncoderType;

}

@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) int screenWidth; 
@property (nonatomic,readonly) int screenHeight; 
@property (nonatomic,readonly) long long deviceClass; 
@property (nonatomic,readonly) long long chipId; 
@property (nonatomic,readonly) long long videoEncoderType; 
@property (nonatomic,readonly) BOOL useSoftFramerateSwitching; 
+(id)sharedInstance;
-(long long)deviceClass;
-(id)init;
-(void)dealloc;
-(NSString *)deviceName;
-(long long)chipId;
-(void)initializeScreenDimension;
-(int)screenWidth;
-(int)screenHeight;
-(long long)videoEncoderType;
-(BOOL)useSoftFramerateSwitching;
@end

