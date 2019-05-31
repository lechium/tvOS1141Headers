/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CKAccountOverrideInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUnitTestingAccount;
	BOOL _accountWantsPushRegistration;
	BOOL _accountWantsFlowControl;
	NSString* _email;
	NSString* _password;
	NSString* _secondEmail;

}

@property (nonatomic,readonly) NSString * email;                             //@synthesize email=_email - In the implementation block
@property (nonatomic,readonly) NSString * password;                          //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSString * secondEmail;                           //@synthesize secondEmail=_secondEmail - In the implementation block
@property (assign,nonatomic) BOOL isUnitTestingAccount;                      //@synthesize isUnitTestingAccount=_isUnitTestingAccount - In the implementation block
@property (assign,nonatomic) BOOL accountWantsPushRegistration;              //@synthesize accountWantsPushRegistration=_accountWantsPushRegistration - In the implementation block
@property (assign,nonatomic) BOOL accountWantsFlowControl;                   //@synthesize accountWantsFlowControl=_accountWantsFlowControl - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)password;
-(id)initWithEmail:(id)arg1 password:(id)arg2 ;
-(NSString *)secondEmail;
-(void)setSecondEmail:(NSString *)arg1 ;
-(id)initAnonymousAccount;
-(NSString *)email;
-(id)CKPropertiesDescription;
-(BOOL)isUnitTestingAccount;
-(void)setIsUnitTestingAccount:(BOOL)arg1 ;
-(BOOL)accountWantsPushRegistration;
-(void)setAccountWantsPushRegistration:(BOOL)arg1 ;
-(BOOL)accountWantsFlowControl;
-(void)setAccountWantsFlowControl:(BOOL)arg1 ;
@end

