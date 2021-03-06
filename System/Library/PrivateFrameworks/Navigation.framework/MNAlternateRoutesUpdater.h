/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNActiveRouteInfo, NSArray, NSMutableArray;

@interface MNAlternateRoutesUpdater : NSObject {

	MNActiveRouteInfo* _mainRoute;
	NSArray* _alternateRoutes;
	NSMutableArray* _trackedAlternateRoutes;

}

@property (nonatomic,readonly) NSArray * alternateRoutes; 
-(BOOL)updateForLocation:(id)arg1 ;
-(BOOL)setAlternateRoutes:(id)arg1 forMainRoute:(id)arg2 ;
-(BOOL)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 ;
-(id)alternateRouteForLocation:(id)arg1 ;
-(id)_findTrackedAlternateRouteMatching:(id)arg1 ;
-(NSArray *)alternateRoutes;
@end

