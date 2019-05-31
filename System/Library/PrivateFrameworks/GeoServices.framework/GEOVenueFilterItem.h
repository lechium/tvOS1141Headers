/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOVenueFilterItem.h>

@protocol GEOVenueFilterItem
@property (nonatomic,readonly) id<GEOVenueIdentifier> filterID; 
@property (nonatomic,readonly) id<GEOVenueLabel> label; 
@property (nonatomic,readonly) BOOL describesParentVenue; 
@required
-(id<GEOVenueIdentifier>)filterID;
-(BOOL)describesParentVenue;
-(id<GEOVenueLabel>)label;

@end


@protocol GEOVenueIdentifier, GEOVenueLabel;
@interface GEOVenueFilterItem : NSObject <GEOVenueFilterItem> {

	id<GEOVenueIdentifier> _filterID;
	id<GEOVenueLabel> _label;
	BOOL _describesParentVenue;

}

@property (nonatomic,readonly) id<GEOVenueIdentifier> filterID;              //@synthesize filterID=_filterID - In the implementation block
@property (nonatomic,readonly) id<GEOVenueLabel> label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL describesParentVenue;                    //@synthesize describesParentVenue=_describesParentVenue - In the implementation block
-(id<GEOVenueIdentifier>)filterID;
-(BOOL)describesParentVenue;
-(id)initWithLabel:(id)arg1 filterID:(id)arg2 ;
-(id)initWithFilterElementInfo:(id)arg1 ;
-(id<GEOVenueLabel>)label;
@end

