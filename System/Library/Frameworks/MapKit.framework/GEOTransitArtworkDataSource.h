/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEOTransitArtworkDataSource <NSObject>
@property (nonatomic,readonly) long long artworkSourceType; 
@property (nonatomic,readonly) long long artworkUseType; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> shieldDataSource; 
@property (nonatomic,readonly) id<GEOTransitIconDataSource> iconDataSource; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource; 
@property (nonatomic,readonly) BOOL hasRoutingIncidentBadge; 
@property (nonatomic,readonly) NSString * accessibilityText; 
@required
-(long long)artworkSourceType;
-(long long)artworkUseType;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(id<GEOTransitShieldDataSource>)iconFallbackShieldDataSource;
-(BOOL)hasRoutingIncidentBadge;
-(NSString *)accessibilityText;

@end

