/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MKURLSerializer : NSObject
+(id)stringForMapType:(unsigned long long)arg1 ;
+(id)stringForDirectionsType:(unsigned long long)arg1 ;
-(id)urlForOpeningMapItems:(id)arg1 options:(id)arg2 ;
-(id)urlForDirectionsFromMapItem:(id)arg1 toMapItem:(id)arg2 transportType:(unsigned long long)arg3 options:(id)arg4 ;
-(id)mapItemsFromUrl:(id)arg1 options:(id*)arg2 ;
@end

