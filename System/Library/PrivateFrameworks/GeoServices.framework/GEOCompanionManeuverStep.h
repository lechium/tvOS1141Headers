/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMutableArray;


@protocol GEOCompanionManeuverStep <NSObject>
@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (nonatomic,retain) NSMutableArray * maneuverNames; 
@property (nonatomic,retain) NSMutableArray * signposts; 
@property (assign,nonatomic) BOOL hasJunctionType; 
@property (assign,nonatomic) int junctionType; 
@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) GEOJunctionElement* junctionElements; 
@property (nonatomic,readonly) int transportType; 
@required
-(int)maneuverType;
-(int)transportType;
-(void)setManeuverType:(int)arg1;
-(void)setHasManeuverType:(BOOL)arg1;
-(BOOL)hasManeuverType;
-(void)clearManeuverNames;
-(void)addManeuverName:(id)arg1;
-(unsigned long long)maneuverNamesCount;
-(id)maneuverNameAtIndex:(unsigned long long)arg1;
-(int)junctionType;
-(void)setJunctionType:(int)arg1;
-(void)setHasJunctionType:(BOOL)arg1;
-(BOOL)hasJunctionType;
-(unsigned long long)junctionElementsCount;
-(GEOJunctionElement*)junctionElements;
-(void)clearSignposts;
-(void)addSignpost:(id)arg1;
-(unsigned long long)signpostsCount;
-(id)signpostAtIndex:(unsigned long long)arg1;
-(NSMutableArray *)maneuverNames;
-(void)setManeuverNames:(id)arg1;
-(NSMutableArray *)signposts;
-(void)setSignposts:(id)arg1;

@end
