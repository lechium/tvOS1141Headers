/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSMutableSet;

@interface _UIStatisticsScalarHistogram : NSObject {

	NSString* _baseKey;
	long long _recordCount;
	long long _values[22];
	NSArray* _bucketKeys;
	NSMutableSet* _children;

}
-(void)recordValue:(double)arg1 ;
-(id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2 ;
-(void)_addChildStatistic:(id)arg1 ;
-(void)clearValues;
-(void)reportValues;
@end
