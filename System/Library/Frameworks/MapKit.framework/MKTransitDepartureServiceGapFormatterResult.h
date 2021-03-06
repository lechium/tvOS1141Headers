/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MKTransitDepartureServiceGapFormatterResult : NSObject {

	NSString* _format;
	NSString* _dateDescription;
	unsigned long long _dateFormat;

}

@property (nonatomic,copy,readonly) NSString * format;                       //@synthesize format=_format - In the implementation block
@property (nonatomic,copy,readonly) NSString * dateDescription;              //@synthesize dateDescription=_dateDescription - In the implementation block
@property (nonatomic,readonly) unsigned long long dateFormat;                //@synthesize dateFormat=_dateFormat - In the implementation block
@property (nonatomic,readonly) NSString * formattedString; 
-(NSString *)format;
-(unsigned long long)dateFormat;
-(id)initWithFormat:(id)arg1 dateDescription:(id)arg2 dateFormat:(unsigned long long)arg3 ;
-(NSString *)formattedString;
-(NSString *)dateDescription;
@end

