/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSVPushNotificationParameters, NSString;

@interface SSVPushNotificationRequest : SSRequest <SSXPCCoding> {

	SSVPushNotificationParameters* _parameters;

}

@property (nonatomic,copy) SSVPushNotificationParameters * pushNotificationParameters;              //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)start;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithPushNotificationParameters:(id)arg1 ;
-(SSVPushNotificationParameters *)pushNotificationParameters;
-(void)setPushNotificationParameters:(SSVPushNotificationParameters *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end

