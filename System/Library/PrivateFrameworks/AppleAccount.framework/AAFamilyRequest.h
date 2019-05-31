/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, AAGrandSlamSigner;

@interface AAFamilyRequest : AARequest {

	ACAccount* _appleAccount;
	AAGrandSlamSigner* _grandSlamSigner;
	AAGrandSlamSigner* _familyGrandSlamSigner;

}

@property (nonatomic,readonly) BOOL isUserInitiated; 
-(id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)_familyGrandSlamSigner;
-(id)urlRequest;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 ;
-(BOOL)isUserInitiated;
-(id)initWithGrandSlamSigner:(id)arg1 ;
@end

