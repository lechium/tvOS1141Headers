/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOMapItemAttribution, NSString, NSArray;

@interface _MKMapItemAttribution : NSObject {

	GEOMapItemAttribution* _geoAttribution;

}

@property (nonatomic,readonly) NSString * providerID; 
@property (nonatomic,readonly) NSString * providerName; 
@property (nonatomic,readonly) NSArray * attributionURLs; 
@property (nonatomic,readonly) NSArray * attributionApps; 
@property (nonatomic,readonly) BOOL requiresAttributionInCallout; 
@property (nonatomic,readonly) BOOL shouldOpenInAppStore; 
-(NSArray *)attributionApps;
-(NSString *)providerID;
-(NSArray *)attributionURLs;
-(BOOL)shouldOpenInAppStore;
-(NSString *)providerName;
-(BOOL)requiresAttributionInCallout;
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
-(id)providerImageAtPath:(id)arg1 scale:(double)arg2 isTemplate:(BOOL)arg3 ;
-(id)providerLogoImageForScale:(double)arg1 ;
-(id)providerSnippetLogoImageForScale:(double)arg1 ;
@end

