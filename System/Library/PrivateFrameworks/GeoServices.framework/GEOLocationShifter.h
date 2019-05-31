/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@protocol _GEOLocationShifterProxy, OS_dispatch_queue;
@class NSLock, NSMutableArray, NSCache, NSObject, NSString;

@interface GEOLocationShifter : NSObject <GEOResourceManifestTileGroupObserver> {

	id<_GEOLocationShifterProxy> _proxy;
	BOOL _isRequestingShiftFunction;
	NSLock* _lock;
	NSMutableArray* _locationsToShift;
	NSCache* _shiftFunctionCache;
	int _resetPrivacyToken;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) BOOL locationShiftEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)useLocalProxy;
+(BOOL)isLocationShiftRequiredForCoordinate:(SCD_Struct_GE29)arg1 ;
+(BOOL)isLocationShiftEnabled;
+(unsigned)locationShiftFunctionVersion;
+(BOOL)isLocationShiftRequiredForRegion:(id)arg1 ;
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)shiftLatLng:(id)arg1 accuracy:(double)arg2 auditToken:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 mustGoToNetworkCallback:(/*^block*/id)arg5 errorHandler:(/*^block*/id)arg6 callbackQueue:(id)arg7 ;
-(BOOL)locationShiftEnabled;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(void)_requestNextShiftFunctionIfNecessary;
-(void)shiftCoordinate:(SCD_Struct_GE29)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)shiftCoordinate:(SCD_Struct_GE29)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 mustGoToNetworkCallback:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 mustGoToNetworkCallback:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(BOOL)shiftCoordinate:(SCD_Struct_GE29)arg1 accuracy:(double)arg2 shiftedCoordinate:(SCD_Struct_GE29*)arg3 shiftedAccuracy:(double*)arg4 ;
-(BOOL)shiftLatLng:(id)arg1 accuracy:(double)arg2 shiftedCoordinate:(SCD_Struct_GE29*)arg3 shiftedAccuracy:(double*)arg4 ;
-(void)_fetchShiftFunctionForLatLng:(id)arg1 auditToken:(id)arg2 callbackQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_shiftLocation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_reset;
@end

