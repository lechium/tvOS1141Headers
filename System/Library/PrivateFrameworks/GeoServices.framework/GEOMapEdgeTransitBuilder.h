/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeBuilder.h>

@interface GEOMapEdgeTransitBuilder : GEOMapEdgeBuilder {

	deque<geo::TransitEdgePiece, std::__1::allocator<geo::TransitEdgePiece> >* _pieces;

}
-(id)initWithMap:(id)arg1 firstPiece:(const TransitEdgePiece*)arg2 ;
-(unsigned long long)_maxTileCount;
-(void)_buildCompleteEdge;
-(BOOL)_findEdgeAheadInTile:(id)arg1 ;
-(BOOL)_findEdgeBehindInTile:(id)arg1 ;
-(BOOL)_shouldFindEdgeAhead;
-(BOOL)_shouldFindEdgeBehind;
-(Matrix<float, 2, 1>)_firstPoint;
-(Matrix<float, 2, 1>)_lastPoint;
-(id)_firstTile;
-(id)_lastTile;
-(id)_tileFinderForMap:(id)arg1 center:(SCD_Struct_GE29)arg2 radius:(double)arg3 ;
@end

