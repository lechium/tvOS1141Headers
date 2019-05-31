/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface StocksWatchPreferences : NSObject {

	BOOL _changeColorSwapped;
	unsigned long long _textDirection;

}

@property (assign,nonatomic,__weak) NSString * defaultStockSymbol; 
@property (assign,nonatomic) long long complicationDisplayMode; 
+(void)initialize;
+(id)sharedPreferences;
-(id)init;
-(void)dealloc;
-(void)reactivateWatchNPSAccessor;
-(void)syncKey:(id)arg1 ;
-(NSString *)defaultStockSymbol;
-(void)setDefaultStockSymbol:(NSString *)arg1 ;
-(long long)complicationDisplayMode;
-(void)setComplicationDisplayMode:(long long)arg1 ;
-(void)syncSelectedStock;
-(void)syncStocksList;
-(void)syncChartInterval;
-(void)syncRowDataType;
@end
