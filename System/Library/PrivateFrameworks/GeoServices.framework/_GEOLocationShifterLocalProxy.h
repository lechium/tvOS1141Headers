/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GEOLocationShifterProxy.h>

@protocol OS_dispatch_queue;
@class _GEOLocationShiftRequester, NSObject, GEOLocationShifterPersistence, NSString;

@interface _GEOLocationShifterLocalProxy : NSObject <_GEOLocationShifterProxy> {

	_GEOLocationShiftRequester* _requester;
	int _resetPrivacyToken;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) GEOLocationShifterPersistence * persistentCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(GEOLocationShifterPersistence *)persistentCache;
-(void)_doNetworkRequestForLatLng:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 shouldCache:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_prunePersistentCache;
-(id)init;
-(void)dealloc;
@end

