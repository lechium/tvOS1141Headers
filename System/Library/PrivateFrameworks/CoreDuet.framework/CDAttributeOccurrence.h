/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSObject;

@interface CDAttributeOccurrence : NSObject {

	NSDate* _date;
	NSObject* _value;

}

@property (readonly) NSDate * date;                 //@synthesize date=_date - In the implementation block
@property (readonly) NSObject * value;              //@synthesize value=_value - In the implementation block
+(id)attributeOccurrenceWithValue:(id)arg1 date:(id)arg2 ;
-(NSDate *)date;
-(NSObject *)value;
-(id)initWithValue:(id)arg1 date:(id)arg2 ;
@end

