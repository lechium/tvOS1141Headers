/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject {

	NSMutableDictionary* _records;
	NSMutableDictionary* _reasons;

}
-(id)init;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)recordWithIdentifier:(id)arg1 ;
-(void)removeRejectedRecordsWithIdentifiers:(id)arg1 ;
-(void)enumerateRecordsAndReasonsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)rejectsTheSameRecordsAs:(id)arg1 ;
-(id)rejectedDescriptions;
@end
