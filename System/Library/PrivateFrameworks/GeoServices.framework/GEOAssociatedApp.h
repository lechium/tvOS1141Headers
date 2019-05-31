/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDAssociatedApp, NSString, NSArray;

@interface GEOAssociatedApp : NSObject {

	GEOPDAssociatedApp* _geoAssociatedApp;

}

@property (nonatomic,retain) GEOPDAssociatedApp * geoAssociatedApp;              //@synthesize geoAssociatedApp=_geoAssociatedApp - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredAppAdamId; 
@property (nonatomic,readonly) NSString * preferredAppAdamId; 
@property (nonatomic,readonly) NSArray * alternateAppAdamIds; 
-(id)initWithGEOPDAssociatedApp:(id)arg1 ;
-(BOOL)hasPreferredAppAdamId;
-(NSString *)preferredAppAdamId;
-(NSArray *)alternateAppAdamIds;
-(GEOPDAssociatedApp *)geoAssociatedApp;
-(void)setGeoAssociatedApp:(GEOPDAssociatedApp *)arg1 ;
@end

