/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraTLVBase.h>
#import <libobjc.A.dylib/HMDCameraTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface HMDEndPointAddress : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding> {

	BOOL _isIPv6Address;
	NSString* _ipAddress;
	NSNumber* _videoRTPPort;
	NSNumber* _audioRTPPort;

}

@property (nonatomic,copy,readonly) NSString * ipAddress;                 //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,readonly) BOOL isIPv6Address;                        //@synthesize isIPv6Address=_isIPv6Address - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * videoRTPPort;              //@synthesize videoRTPPort=_videoRTPPort - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * audioRTPPort;              //@synthesize audioRTPPort=_audioRTPPort - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)ipAddress;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)isIPv6Address;
-(NSNumber *)audioRTPPort;
-(NSNumber *)videoRTPPort;
-(id)initWithIPAddress:(id)arg1 isIPv6Address:(BOOL)arg2 videoRTPPort:(id)arg3 audioRTPPort:(id)arg4 ;
-(BOOL)compatibleWithRemoteEndPoint:(id)arg1 ;
@end

