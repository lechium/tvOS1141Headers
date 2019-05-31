/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioPlayEventCollection.h>

@class NSString;

@interface RadioMutablePlayEventCollection : RadioPlayEventCollection

@property (nonatomic,copy) NSString * deviceName; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)addPlayEvents:(id)arg1 forStationHash:(id)arg2 stationID:(long long)arg3 ;
-(void)addPlayEvents:(id)arg1 forStation:(id)arg2 ;
@end

