/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSNumber, NSString, RadioPlayEventCollection, NSArray;

@interface RadioGetHistoryRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	BOOL _fetchForAccount;
	BOOL _includesAds;
	BOOL _aggregateSessions;
	BOOL _shouldProcessCategories;
	NSNumber* _accountUniqueIdentifier;
	unsigned long long _maxNumberOfTracks;
	long long _stationID;
	NSString* _stationHash;
	RadioPlayEventCollection* _playEventCollection;
	NSArray* _playActivityEvents;

}

@property (nonatomic,copy,readonly) NSNumber * accountUniqueIdentifier;                 //@synthesize accountUniqueIdentifier=_accountUniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfTracks;                      //@synthesize maxNumberOfTracks=_maxNumberOfTracks - In the implementation block
@property (assign,nonatomic) BOOL fetchForAccount;                                      //@synthesize fetchForAccount=_fetchForAccount - In the implementation block
@property (assign,nonatomic) BOOL includesAds;                                          //@synthesize includesAds=_includesAds - In the implementation block
@property (assign,nonatomic) long long stationID;                                       //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                                      //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) BOOL aggregateSessions;                                    //@synthesize aggregateSessions=_aggregateSessions - In the implementation block
@property (nonatomic,copy) RadioPlayEventCollection * playEventCollection;              //@synthesize playEventCollection=_playEventCollection - In the implementation block
@property (nonatomic,copy) NSArray * playActivityEvents;                                //@synthesize playActivityEvents=_playActivityEvents - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessCategories;                              //@synthesize shouldProcessCategories=_shouldProcessCategories - In the implementation block
-(long long)stationID;
-(id)init;
-(void)cancel;
-(NSNumber *)accountUniqueIdentifier;
-(NSArray *)playActivityEvents;
-(void)setPlayActivityEvents:(NSArray *)arg1 ;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(NSString *)stationHash;
-(RadioPlayEventCollection *)playEventCollection;
-(void)setPlayEventCollection:(RadioPlayEventCollection *)arg1 ;
-(BOOL)shouldProcessCategories;
-(void)setShouldProcessCategories:(BOOL)arg1 ;
-(unsigned long long)maxNumberOfTracks;
-(void)setMaxNumberOfTracks:(unsigned long long)arg1 ;
-(id)_newHistoryCategoryWithDictionary:(id)arg1 ;
-(id)_newHistoryItemWithDictionary:(id)arg1 ;
-(void)startWithHistoryCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)fetchForAccount;
-(void)setFetchForAccount:(BOOL)arg1 ;
-(BOOL)includesAds;
-(void)setIncludesAds:(BOOL)arg1 ;
-(BOOL)aggregateSessions;
-(void)setAggregateSessions:(BOOL)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
@end

