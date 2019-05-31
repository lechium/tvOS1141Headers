/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/YQLRequest.h>

@protocol StockUpdaterDelegate;
@class NSError, NSArray;

@interface StockUpdater : YQLRequest {

	NSError* _lastError;
	BOOL _isComprehensive;
	BOOL _forceUpdate;
	id<StockUpdaterDelegate> _delegate;
	NSArray* _requestStocks;
	NSArray* _pendingStocks;
	/*^block*/id _updateCompletionHandler;

}

@property (assign,nonatomic,__weak) id<StockUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isComprehensive;                                //@synthesize isComprehensive=_isComprehensive - In the implementation block
@property (nonatomic,readonly) BOOL forceUpdate;                                    //@synthesize forceUpdate=_forceUpdate - In the implementation block
@property (nonatomic,retain) NSArray * requestStocks;                               //@synthesize requestStocks=_requestStocks - In the implementation block
@property (nonatomic,retain) NSArray * pendingStocks;                               //@synthesize pendingStocks=_pendingStocks - In the implementation block
@property (nonatomic,copy) id updateCompletionHandler;                              //@synthesize updateCompletionHandler=_updateCompletionHandler - In the implementation block
-(BOOL)forceUpdate;
-(id<StockUpdaterDelegate>)delegate;
-(void)setDelegate:(id<StockUpdaterDelegate>)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)parseData:(id)arg1 ;
-(BOOL)hadError;
-(void)setRequestStocks:(NSArray *)arg1 ;
-(BOOL)isComprehensive;
-(NSArray *)requestStocks;
-(id)updateCompletionHandler;
-(void)setUpdateCompletionHandler:(id)arg1 ;
-(BOOL)_updateStocks:(id)arg1 comprehensive:(BOOL)arg2 forceUpdate:(BOOL)arg3 ;
-(void)setPendingStocks:(NSArray *)arg1 ;
-(id)_parseDataSourceMapFromDataSourceDictionaries:(id)arg1 ;
-(void)_parseExchangeDictionaries:(id)arg1 ;
-(void)_parseQuoteDictionaries:(id)arg1 withDataSources:(id)arg2 ;
-(id)aggregateDictionaryDomain;
-(NSArray *)pendingStocks;
@end
