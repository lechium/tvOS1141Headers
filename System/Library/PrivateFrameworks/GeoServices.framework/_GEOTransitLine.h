/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitLine.h>

@protocol GEOTransitSystem;
@class NSString, GEOMapItemIdentifier, NSArray, GEOPBTransitLine, GEOStyleAttributes;

@interface _GEOTransitLine : NSObject <GEOTransitLine> {

	GEOPBTransitLine* _line;
	id<GEOTransitSystem> _system;

}

@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (nonatomic,readonly) id<GEOTransitSystem> system; 
@property (nonatomic,readonly) unsigned long long departureTimeDisplayStyle; 
@property (nonatomic,readonly) BOOL departuresAreVehicleSpecific; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> modeArtwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> alternateArtwork; 
@property (nonatomic,readonly) BOOL hasLineColorString; 
@property (nonatomic,readonly) NSString * lineColorString; 
@property (nonatomic,readonly) BOOL showVehicleNumber; 
@property (nonatomic,readonly) NSArray * operatingHours; 
-(unsigned long long)muid;
-(GEOStyleAttributes *)styleAttributes;
-(NSArray *)operatingHours;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(id<GEOTransitArtworkDataSource>)alternateArtwork;
-(NSString *)lineColorString;
-(BOOL)showVehicleNumber;
-(id)initWithLine:(id)arg1 system:(id)arg2 ;
-(unsigned long long)departureTimeDisplayStyle;
-(BOOL)departuresAreVehicleSpecific;
-(BOOL)hasLineColorString;
-(NSString *)name;
-(GEOMapItemIdentifier *)identifier;
-(id<GEOTransitSystem>)system;
@end

