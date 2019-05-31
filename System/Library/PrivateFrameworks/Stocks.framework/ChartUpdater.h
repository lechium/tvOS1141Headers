/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/YQLRequest.h>

@protocol ChartUpdaterDelegate;
@class Stock, StockChartData;

@interface ChartUpdater : YQLRequest {

	Stock* _stock;
	StockChartData* _currentChartData;
	/*^block*/id _updateCompletionHandler;
	id<ChartUpdaterDelegate> _delegate;
	long long _interval;

}

@property (assign,nonatomic,__weak) id<ChartUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) long long interval;                                            //@synthesize interval=_interval - In the implementation block
+(id)_rangeStringForInterval:(long long)arg1 ;
-(void)cancel;
-(id<ChartUpdaterDelegate>)delegate;
-(void)setDelegate:(id<ChartUpdaterDelegate>)arg1 ;
-(long long)interval;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)parseData:(id)arg1 ;
-(id)aggregateDictionaryDomain;
-(BOOL)updateChartForStock:(id)arg1 interval:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)parseDataSeriesDictionary:(id)arg1 ;
-(BOOL)updateChartForStock:(id)arg1 interval:(long long)arg2 ;
-(void)parseDataSeriesDictionary:(id)arg1 interval:(long long)arg2 ;
-(id)dataSeries;
@end
