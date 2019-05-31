/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKLStreamObserver.h>

@class NSMutableDictionary;

@interface CKLStreamLogStatsObserver : CKLStreamObserver {

	NSMutableDictionary* _totalSizeByLine;
	NSMutableDictionary* _totalCountByLine;

}

@property (retain) NSMutableDictionary * totalSizeByLine;               //@synthesize totalSizeByLine=_totalSizeByLine - In the implementation block
@property (retain) NSMutableDictionary * totalCountByLine;              //@synthesize totalCountByLine=_totalCountByLine - In the implementation block
-(void)finish;
-(id)initWithLogTypes:(unsigned long long)arg1 ;
-(NSMutableDictionary *)totalSizeByLine;
-(NSMutableDictionary *)totalCountByLine;
-(void)eventMatched:(id)arg1 ;
-(void)setTotalSizeByLine:(NSMutableDictionary *)arg1 ;
-(void)setTotalCountByLine:(NSMutableDictionary *)arg1 ;
@end

