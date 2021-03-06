/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>

@class NSDictionary, NSError, NSString, NSOperation;

@interface TVHKStoreSearchOperation : TVHSAsynchronousOperation {

	NSDictionary* _results;
	NSError* _error;
	NSString* _searchTerm;
	unsigned long long _searchType;
	NSOperation* _connectionRequestOperation;

}

@property (nonatomic,copy) NSString * searchTerm;                                   //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) unsigned long long searchType;                         //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,retain) NSOperation * connectionRequestOperation;              //@synthesize connectionRequestOperation=_connectionRequestOperation - In the implementation block
@property (nonatomic,retain) NSDictionary * results;                                //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
+(id)_clientApplicationParameterValueForSearchType:(unsigned long long)arg1 ;
-(void)setSearchType:(unsigned long long)arg1 ;
-(unsigned long long)searchType;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)init;
-(void)cancel;
-(NSDictionary *)results;
-(void)setResults:(NSDictionary *)arg1 ;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(void)executionDidBegin;
-(void)setConnectionRequestOperation:(NSOperation *)arg1 ;
-(NSOperation *)connectionRequestOperation;
-(id)initWithSearchTerm:(id)arg1 andType:(unsigned long long)arg2 ;
@end

