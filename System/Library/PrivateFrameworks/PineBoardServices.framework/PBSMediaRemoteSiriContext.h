/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PBSMediaRemoteSiriContext : NSObject <NSSecureCoding> {

	NSString* _sourceName;
	NSString* _requestorBundleID;
	NSString* _deviceID;

}

@property (setter=_setRequestorBundleID:,nonatomic,copy) NSString * requestorBundleID;              //@synthesize requestorBundleID=_requestorBundleID - In the implementation block
@property (nonatomic,copy) NSString * sourceName;                                                   //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,copy) NSString * deviceID;                                                     //@synthesize deviceID=_deviceID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)sourceName;
-(void)setSourceName:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)_setRequestorBundleID:(id)arg1 ;
-(NSString *)requestorBundleID;
@end
