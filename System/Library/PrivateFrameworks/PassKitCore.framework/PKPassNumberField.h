/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPassField.h>

@class NSString;

@interface PKPassNumberField : PKPassField {

	NSString* _currencyCode;
	long long _numberStyle;

}

@property (assign,nonatomic) long long numberStyle;              //@synthesize numberStyle=_numberStyle - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;              //@synthesize currencyCode=_currencyCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)value;
-(void)setNumberStyle:(long long)arg1 ;
-(long long)numberStyle;
@end
