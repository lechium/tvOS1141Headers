/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, NSString, RTFingerprintMO;

@interface RTWiFiAccessPointMO : NSManagedObject

@property (nonatomic,copy) NSNumber * adHoc; 
@property (nonatomic,copy) NSNumber * age; 
@property (nonatomic,copy) NSNumber * applePersonalHotspot; 
@property (nonatomic,copy) NSNumber * captiveNetwork; 
@property (nonatomic,copy) NSNumber * carPlay; 
@property (nonatomic,copy) NSNumber * channel; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * mac; 
@property (nonatomic,copy) NSNumber * mode; 
@property (nonatomic,copy) NSNumber * rssi; 
@property (nonatomic,copy) NSString * ssid; 
@property (nonatomic,retain) RTFingerprintMO * fingerprint; 
+(id)fetchRequest;
+(id)managedObjectWithAccessPoint:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

