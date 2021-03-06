/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTNotifier.h>

@interface RTBluetoothManager : RTNotifier
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsNotificationName:(id)arg1 ;
+(id)carKitConnectionStateToString:(long long)arg1 ;
-(void)shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)_shutdown;
-(void)_fetchCarKitConnectedStateWithHandler:(/*^block*/id)arg1 ;
-(void)fetchCarKitConnectedStateWithHandler:(/*^block*/id)arg1 ;
-(BOOL)interestedInDeviceType:(id)arg1 ;
@end

