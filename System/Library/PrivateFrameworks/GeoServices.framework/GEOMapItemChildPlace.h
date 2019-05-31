/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDChildPlace, GEOMapItemIdentifier, NSString;

@interface GEOMapItemChildPlace : NSObject {

	GEOPDChildPlace* _childPlace;
	GEOMapItemIdentifier* _identifier;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
-(id)initWithChildPlace:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(GEOMapItemIdentifier *)identifier;
@end
