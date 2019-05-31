/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol GEOTransitIncidentEntity <NSObject>
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasNextStopIDs; 
@property (nonatomic,readonly) NSSet * nextStopIDs; 
@required
-(unsigned long long)muid;
-(NSSet *)nextStopIDs;
-(BOOL)hasNextStopIDs;

@end

