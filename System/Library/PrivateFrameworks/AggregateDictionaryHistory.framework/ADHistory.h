/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AggregateDictionaryHistory.framework/AggregateDictionaryHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AggregateDictionaryHistory/AggregateDictionaryHistory-Structs.h>
@class NSString;

@interface ADHistory : NSObject {

	Database* _database;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(id)initWithDefaultPath;
-(BOOL)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(/*^block*/id)arg4 ;
-(BOOL)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(/*^block*/id)arg4 ;
@end
