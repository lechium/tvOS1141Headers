/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CTMessageAddress.h>

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress> {

	NSString* _digits;
	NSString* _countryCode;
	BOOL _isShortCode;

}

@property (readonly) NSString * digits;                   //@synthesize digits=_digits - In the implementation block
@property (readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (assign) BOOL isShortCode;                      //@synthesize isShortCode=_isShortCode - In the implementation block
+(BOOL)isValidPhoneNumber:(id)arg1 ;
+(BOOL)isValidPhoneNumberChar:(unsigned short)arg1 ;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(id)initWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(BOOL)isShortCode;
-(id)canonicalFormat;
-(id)formatForCallingCountry:(id)arg1 ;
-(long long)numberOfDigitsForShortCodeNumber;
-(void)setIsShortCode:(BOOL)arg1 ;
-(NSString *)countryCode;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)digits;
-(id)encodedString;
@end
