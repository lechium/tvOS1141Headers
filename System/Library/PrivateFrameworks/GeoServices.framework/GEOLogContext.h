/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray;

@interface GEOLogContext : NSObject <NSCopying> {

	NSMutableArray* _logMsgStates;

}

@property (nonatomic,readonly) NSArray * logMsgStates;              //@synthesize logMsgStates=_logMsgStates - In the implementation block
+(id)emptyLogContext;
+(id)defaultGlobalLogContext;
+(id)logContextWithDefaultTraits;
+(id)logContextWithDefaultTraitsForCachedContext;
+(id)logContextFromTraits:(id)arg1 ;
-(id)initWithDefaultStates;
-(id)initWithGlobalDefaultStates;
-(id)initWithDefaultTraits;
-(void)mergeLogContext:(id)arg1 ;
-(id)logContextByMergingLogContext:(id)arg1 ;
-(void)registerLogMsgState:(id)arg1 ;
-(void)unregisterLogMsgStateOfType:(int)arg1 ;
-(void)unregisterLogMsgStateOfType:(int)arg1 stateOrigin:(id)arg2 ;
-(void)registerUserSessionStateOfType:(unsigned long long)arg1 isNavSessionAllowed:(BOOL)arg2 userSessionSnapshot:(id)arg3 ;
-(id)logMsgStateOfType:(int)arg1 ;
-(id)currentExperimentsState;
-(void)_initializeDefaultStates;
-(void)_initializeGlobalDefaultStates;
-(void)_registerLogContextWithTraits:(id)arg1 ;
-(void)_registerDeviceIdentifierState;
-(void)_registerApplicationIdentifierState;
-(void)_registerDeviceConnectionState;
-(void)updateDeviceConnectionState;
-(void)_registerExperimentsState;
-(void)_registerDefaultMapUIState;
-(void)_registerDeviceBaseStateWithTraits:(id)arg1 ;
-(void)_registerDeviceLocaleStateWithTraits:(id)arg1 ;
-(void)_registerMapViewStateWithTraits:(id)arg1 ;
-(NSArray *)logMsgStates;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTraits:(id)arg1 ;
@end

