/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreResult.h>

@interface NSPersistentHistoryResult : NSPersistentStoreResult {

	id _aggregatedResult;
	long long _resultType;

}

@property (readonly) id result;                         //@synthesize aggregatedResult=_aggregatedResult - In the implementation block
@property (readonly) long long resultType;              //@synthesize resultType=_resultType - In the implementation block
-(id)initWithResultType:(long long)arg1 andResult:(id)arg2 ;
-(id)initWithSubresults:(id)arg1 ;
-(long long)resultType;
-(void)dealloc;
-(id)description;
-(id)result;
@end
