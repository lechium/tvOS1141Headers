/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRExternalDeviceTransport.h>

@class _MRDeviceInfoMessageProtobuf, NSNetService;

@interface MRNetServiceTransport : MRExternalDeviceTransport {

	_MRDeviceInfoMessageProtobuf* _deviceInfo;
	BOOL _requiresCustomPairing;
	NSNetService* _netService;

}

@property (nonatomic,retain) NSNetService * netService;               //@synthesize netService=_netService - In the implementation block
@property (assign,nonatomic) BOOL requiresCustomPairing; 
+(id)createDeviceInfoFromNetService:(id)arg1 ;
+(id)createDeviceInfoFromTXTRecord:(id)arg1 ;
-(id)hostname;
-(id)error;
-(id)description;
-(id)name;
-(void)reset;
-(long long)port;
-(id)deviceInfo;
-(BOOL)requiresCustomPairing;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 ;
-(id)initWithNetService:(id)arg1 ;
-(void)setRequiresCustomPairing:(BOOL)arg1 ;
-(void)setNetService:(NSNetService *)arg1 ;
-(void)updateDeviceInfoWithTXTRecord:(id)arg1 ;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(NSNetService *)netService;
@end
