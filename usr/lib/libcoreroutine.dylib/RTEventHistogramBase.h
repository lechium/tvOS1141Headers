/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTEventHistogram.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RTEventHistogramBase : NSObject <RTEventHistogram, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)reset;
-(void)clear;
-(void)addEvent:(id)arg1 ;
-(void)addEvents:(id)arg1 ;
-(void)addEventId:(id)arg1 ;
-(void)addEventIds:(id)arg1 ;
-(void)addEvent:(id)arg1 weight:(double)arg2 ;
-(void)addEventId:(id)arg1 weight:(double)arg2 ;
-(double)weightForEventId:(id)arg1 ;
-(id)allEventIds;
-(id)allSortedEventIdsWithComparator:(/*^block*/id)arg1 ;
-(id)allSortedByWeightEventIds;
-(id)topN:(unsigned long long)arg1 ;
-(id)topN:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)top;
-(id)topUsingComparator:(/*^block*/id)arg1 ;
@end

