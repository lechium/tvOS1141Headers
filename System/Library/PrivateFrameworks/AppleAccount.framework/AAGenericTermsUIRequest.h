/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, ACAccount;

@interface AAGenericTermsUIRequest : AARequest {

	NSDictionary* _requestDictionary;
	ACAccount* _account;
	BOOL _preferPassword;

}
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 preferPassword:(BOOL)arg3 ;
-(id)initWithParameters:(id)arg1 ;
@end
