/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFClientConfigurationMutating.h>

@class AFClientConfiguration, AFAudioPlaybackRequest, NSString;

@interface _AFClientConfigurationMutation : NSObject <AFClientConfigurationMutating> {

	AFClientConfiguration* _baseModel;
	BOOL _isDeviceInSetupFlow;
	BOOL _isDeviceInCarDNDMode;
	AFAudioPlaybackRequest* _tapToSiriAudioPlaybackRequest;
	AFAudioPlaybackRequest* _twoShotAudioPlaybackRequest;
	struct {
		unsigned isDirty : 1;
		unsigned hasIsDeviceInSetupFlow : 1;
		unsigned hasIsDeviceInCarDNDMode : 1;
		unsigned hasTapToSiriAudioPlaybackRequest : 1;
		unsigned hasTwoShotAudioPlaybackRequest : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setIsDeviceInCarDNDMode:(BOOL)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setIsDeviceInSetupFlow:(BOOL)arg1 ;
-(void)setTapToSiriAudioPlaybackRequest:(id)arg1 ;
-(void)setTwoShotAudioPlaybackRequest:(id)arg1 ;
@end
