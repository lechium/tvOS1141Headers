/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSString;

@interface ATVHighSecurityAccountVerifyCodeResponse : AAResponse

@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSString * errorTitle; 
@property (nonatomic,readonly) NSString * errorMessage; 
@property (nonatomic,readonly) long long errorCode; 
-(long long)errorCode;
-(NSString *)errorMessage;
-(BOOL)success;
-(NSString *)errorTitle;
@end
