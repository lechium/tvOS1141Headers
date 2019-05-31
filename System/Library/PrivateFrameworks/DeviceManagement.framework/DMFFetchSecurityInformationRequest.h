/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSArray;

@interface DMFFetchSecurityInformationRequest : CATTaskRequest {

	NSArray* _infoKeys;

}

@property (nonatomic,copy) NSArray * infoKeys;              //@synthesize infoKeys=_infoKeys - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)allPlatformSecurityInfoKeys;
+(id)tvOSSecurityInfoKeys;
+(id)currentPlatformSecurityInfoKeys;
+(id)iOSSecurityInfoKeys;
+(id)macOSSecurityInfoKeys;
+(id)watchOSSecurityInfoKeys;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)infoKeys;
-(void)setInfoKeys:(NSArray *)arg1 ;
@end
