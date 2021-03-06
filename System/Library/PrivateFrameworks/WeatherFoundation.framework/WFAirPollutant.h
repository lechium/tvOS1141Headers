/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSString;

@interface WFAirPollutant : NSObject <NSSecureCoding> {

	BOOL _isPrimary;
	NSLocale* _locale;
	NSString* _localizedName;
	NSString* _localizedDescription;
	double _concentration;

}

@property (copy) NSLocale * locale;                            //@synthesize locale=_locale - In the implementation block
@property (copy) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign) double concentration;                       //@synthesize concentration=_concentration - In the implementation block
@property (assign) BOOL isPrimary;                             //@synthesize isPrimary=_isPrimary - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setIsPrimary:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)localizedDescription;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSString *)localizedName;
-(NSLocale *)locale;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setConcentration:(double)arg1 ;
-(double)concentration;
-(BOOL)isPrimary;
@end

