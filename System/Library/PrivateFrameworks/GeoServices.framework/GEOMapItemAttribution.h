/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOSearchAttributionInfo, NSArray, NSString;

@interface GEOMapItemAttribution : NSObject {

	GEOSearchAttributionInfo* _info;
	NSArray* _attributionURLs;
	NSString* _yelpID;
	NSString* _poiID;

}

@property (nonatomic,readonly) NSString * providerID; 
@property (nonatomic,readonly) NSString * providerName; 
@property (nonatomic,readonly) NSArray * attributionURLs;                      //@synthesize attributionURLs=_attributionURLs - In the implementation block
@property (nonatomic,readonly) NSArray * attributionApps; 
@property (nonatomic,readonly) NSString * webBaseActionURL; 
@property (nonatomic,readonly) BOOL shouldOpenInAppStore; 
@property (nonatomic,readonly) BOOL requiresAttributionInCallout; 
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(NSArray *)attributionApps;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 ;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3 ;
-(NSString *)providerID;
-(NSArray *)attributionURLs;
-(NSString *)webBaseActionURL;
-(BOOL)shouldOpenInAppStore;
-(NSString *)providerName;
-(id)providerLogoPathForScale:(double)arg1 ;
-(id)providerSnippetLogoPathForScale:(double)arg1 ;
-(BOOL)requiresAttributionInCallout;
-(id)_yelpHTTPURLForRequirement:(int)arg1 withUID:(id)arg2 writeAReview:(BOOL)arg3 ;
@end

