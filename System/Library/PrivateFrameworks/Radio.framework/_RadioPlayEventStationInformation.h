/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _RadioPlayEventStationInformation : NSObject {

	NSString* _stationHash;
	long long _stationID;

}

@property (nonatomic,copy) NSString * stationHash;              //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) long long stationID;               //@synthesize stationID=_stationID - In the implementation block
-(long long)stationID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(NSString *)stationHash;
@end
