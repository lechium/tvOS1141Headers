/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFLocation;

@interface WFGeocodeResponse : WFResponse <NSSecureCoding> {

	WFLocation* _location;

}

@property (readonly) WFLocation * location;              //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(WFLocation *)location;
-(id)initWithIdentifier:(id)arg1 location:(id)arg2 ;
@end

