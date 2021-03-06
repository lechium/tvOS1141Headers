/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Stocks/Stocks-Structs.h>
@class ChartLabelInfo, NSMutableArray;

@interface ChartLabelInfoManager : NSObject {

	ChartLabelInfo* _yAxisLabelInfo;
	NSMutableArray* _monthLabelInfoArrays;
	NSMutableArray* _integerLabelInfoArray;
	BOOL _use24hrTime;

}
+(CFStringRef)_CFDateFormatterPropertyForMonthLabelLength:(long long)arg1 ;
+(id)sharedLabelInfoManager;
+(void)clearSharedManager;
+(id)chartLabelFont;
-(id)init;
-(void)dealloc;
-(void)resetLocale;
-(id)labelInfoWithString:(id)arg1 ;
-(id)labelInfoForYAxis;
-(id)labelInfoWithUnsignedInteger:(unsigned long long)arg1 ;
-(BOOL)use24hrTime;
-(id)monthLabelInfoArrayForLabelLength:(long long)arg1 ;
@end

