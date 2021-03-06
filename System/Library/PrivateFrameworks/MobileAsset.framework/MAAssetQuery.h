/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSMutableArray, NSString, NSArray;

@interface MAAssetQuery : NSObject {

	BOOL _augmentState;
	NSDate* _postedDate;
	NSMutableArray* _queryParams;
	NSString* _assetType;
	NSArray* _results;
	long long _returnTypes;
	NSDate* _lastFetchDate;

}

@property (nonatomic,readonly) NSMutableArray * queryParams;              //@synthesize queryParams=_queryParams - In the implementation block
@property (nonatomic,readonly) BOOL augmentState;                         //@synthesize augmentState=_augmentState - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                      //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSArray * results;                         //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) long long returnTypes;                     //@synthesize returnTypes=_returnTypes - In the implementation block
@property (nonatomic,readonly) NSDate * lastFetchDate;                    //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,readonly) NSDate * postedDate;                       //@synthesize postedDate=_postedDate - In the implementation block
-(BOOL)augmentState;
-(long long)returnTypes;
-(long long)addKeyValueArray:(id)arg1 with:(id)arg2 ;
-(void)getResultsFromMessage:(id)arg1 ;
-(void)returnTypes:(long long)arg1 ;
-(long long)addKeyValuePair:(id)arg1 with:(id)arg2 ;
-(NSDate *)postedDate;
-(void)dealloc;
-(id)initWithType:(id)arg1 ;
-(NSArray *)results;
-(void)augmentResultsWithState:(BOOL)arg1 ;
-(NSMutableArray *)queryParams;
-(void)queryMetaData:(/*^block*/id)arg1 ;
-(NSString *)assetType;
-(long long)queryMetaDataSync;
-(NSDate *)lastFetchDate;
@end

