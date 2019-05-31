/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIContactManaging.h>

@class NSUUID, NSString;

@interface TIContactManager : NSObject <TIContactManaging> {

	NSUUID* contactCollectionUUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSUUID * contactCollectionUUID; 
+(id)singletonInstance;
+(id)sharedTIContactManager;
+(void)setSharedTIContactManager:(id)arg1 ;
-(void)unload;
-(void)dealloc;
-(/*^block*/id)addContactObserver:(/*^block*/id)arg1 ;
-(void)removeContactObserver:(/*^block*/id)arg1 ;
-(void)getOnce:(/*^block*/id)arg1 ;
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(NSUUID *)contactCollectionUUID;
@end

