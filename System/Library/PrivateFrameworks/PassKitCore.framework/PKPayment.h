/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentToken, PKContact, PKShippingMethod, NSData, NSMutableDictionary;

@interface PKPayment : NSObject <NSSecureCoding> {

	PKPaymentToken* _token;
	PKContact* _billingContact;
	PKContact* _shippingContact;
	PKShippingMethod* _shippingMethod;
	NSData* _credential;
	NSMutableDictionary* _authKitAuthenticationResults;
	long long _biometricAuthorizationAttempts;

}

@property (nonatomic,retain) PKContact * billingContact;                                      //@synthesize billingContact=_billingContact - In the implementation block
@property (nonatomic,retain) PKContact * shippingContact;                                     //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,retain) PKPaymentToken * token;                                          //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) PKShippingMethod * shippingMethod;                               //@synthesize shippingMethod=_shippingMethod - In the implementation block
@property (nonatomic,retain) NSData * credential;                                             //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * authKitAuthenticationResults;              //@synthesize authKitAuthenticationResults=_authKitAuthenticationResults - In the implementation block
@property (assign,nonatomic) long long biometricAuthorizationAttempts;                        //@synthesize biometricAuthorizationAttempts=_biometricAuthorizationAttempts - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)version;
+(id)paymentWithProtobuf:(id)arg1 ;
-(NSData *)credential;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(PKPaymentToken *)token;
-(void)setToken:(PKPaymentToken *)arg1 ;
-(PKContact *)shippingContact;
-(PKShippingMethod *)shippingMethod;
-(id)initWithToken:(id)arg1 ;
-(void)setBillingContact:(PKContact *)arg1 ;
-(void)setShippingContact:(PKContact *)arg1 ;
-(void)setShippingMethod:(PKShippingMethod *)arg1 ;
-(PKContact *)billingContact;
-(void)setAuthKitAuthenticationResults:(NSMutableDictionary *)arg1 ;
-(id)protobuf;
-(void)setBiometricAuthorizationAttempts:(long long)arg1 ;
-(NSMutableDictionary *)authKitAuthenticationResults;
-(long long)biometricAuthorizationAttempts;
-(void)setCredential:(NSData *)arg1 ;
@end

