/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKMapItemAttribution.h>

@class GEOMapItemReviewsAttribution, NSArray;

@interface _MKMapItemReviewsAttribution : _MKMapItemAttribution {

	GEOMapItemReviewsAttribution* _geoReviewsAttribution;

}

@property (nonatomic,readonly) NSArray * addReviewURLs; 
-(NSArray *)addReviewURLs;
-(id)urlsForReview:(id)arg1 ;
-(id)urlsForSelectedItemWithItems:(id)arg1 ;
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
@end
