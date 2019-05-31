/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, CLLocationManager, NSXPCConnection, NSString;

@interface WLKLocationManager : NSObject <CLLocationManagerDelegate> {

	int _didChangeNotificationToken;
	NSDictionary* _lastKnownLocation;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _readWriteQueue;
	/*^block*/id _locationUpdateBlock;
	CLLocationManager* _locationManager;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                 //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> readWriteQueue;              //@synthesize readWriteQueue=_readWriteQueue - In the implementation block
@property (nonatomic,copy) id locationUpdateBlock;                                     //@synthesize locationUpdateBlock=_locationUpdateBlock - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                      //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) int didChangeNotificationToken;                           //@synthesize didChangeNotificationToken=_didChangeNotificationToken - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                             //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSDictionary * lastKnownLocation;                       //@synthesize lastKnownLocation=_lastKnownLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dictionaryForLocation:(id)arg1 ;
+(id)defaultLocationManager;
-(void)_writeToDisk;
-(id)_dictionaryRepresentation;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(long long)authorizationStatus;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_connection;
-(void)_readFromDisk;
-(long long)_statusForCLAuthorizationStatus:(int)arg1 ;
-(void)_requestLastLocation:(/*^block*/id)arg1 ;
-(BOOL)_locationNeedsUpdate:(id)arg1 ;
-(void)setLastKnownLocation:(NSDictionary *)arg1 ;
-(void)_requestLocation:(/*^block*/id)arg1 ;
-(void)setLocationUpdateBlock:(id)arg1 ;
-(id)_dictionaryOnDisk;
-(void)_writeToDisk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dictionaryOnDisk:(/*^block*/id)arg1 ;
-(id)_supportPath;
-(id)locationUpdateBlock;
-(NSDictionary *)lastKnownLocation;
-(NSObject*<OS_dispatch_queue>)readWriteQueue;
-(void)setReadWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)didChangeNotificationToken;
-(void)setDidChangeNotificationToken:(int)arg1 ;
-(CLLocationManager *)locationManager;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)requestAuthorization;
-(void)updateLocationIfNeeded;
-(void)_refresh;
@end

