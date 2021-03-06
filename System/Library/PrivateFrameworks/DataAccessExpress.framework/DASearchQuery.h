/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DASearchQueryConsumer;
#import <DataAccessExpress/DataAccessExpress-Structs.h>
@class NSString, NSPredicate;

@interface DASearchQuery : NSObject {

	int _timeLimit;
	NSString* _searchString;
	NSPredicate* _searchPredicate;
	id<DASearchQueryConsumer> _consumer;
	NSString* _searchID;
	unsigned long long _state;
	NSRange _range;

}

@property (nonatomic,copy) NSString * searchString;                                  //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) NSPredicate * searchPredicate;                            //@synthesize searchPredicate=_searchPredicate - In the implementation block
@property (nonatomic,copy) NSString * searchID;                                      //@synthesize searchID=_searchID - In the implementation block
@property (assign,nonatomic) unsigned long long state;                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) NSRange range;                                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned maxResults; 
@property (assign,nonatomic) int timeLimit;                                          //@synthesize timeLimit=_timeLimit - In the implementation block
@property (assign,nonatomic,__weak) id<DASearchQueryConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
+(id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(unsigned)maxResults;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)sendFinishedToConsumerWithError:(id)arg1 ;
-(void)sendResultsToConsumer:(id)arg1 ;
-(void)setSearchID:(NSString *)arg1 ;
-(NSString *)searchID;
-(id)initWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(void)setSearchPredicate:(NSPredicate *)arg1 ;
-(id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(BOOL)isQueryRunning;
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)searchString;
-(NSRange)range;
-(id)dictionaryRepresentation;
-(void)setConsumer:(id<DASearchQueryConsumer>)arg1 ;
-(id<DASearchQueryConsumer>)consumer;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(void)setTimeLimit:(int)arg1 ;
-(int)timeLimit;
-(NSPredicate *)searchPredicate;
@end

