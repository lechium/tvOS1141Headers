/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMFall : NSObject
+(BOOL)areStatsAvailable;
-(BOOL)setStatsEnabled:(BOOL)arg1 ;
-(unsigned long long)setDataCollectionConfiguration:(unsigned long long)arg1 ;
-(id)fallConfig;
-(id)sendStatsDataToUrl:(id)arg1 ;
-(void)sendStatsDataToUrl:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)simulateEvent:(unsigned long long)arg1 ;
@end

