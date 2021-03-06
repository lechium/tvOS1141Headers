/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSUUID, NSNumber, NSDate, NSOrderedSet;

@interface RTFingerprintMO : NSManagedObject

@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSNumber * settledState; 
@property (nonatomic,copy) NSDate * start; 
@property (nonatomic,retain) NSOrderedSet * wifiAccessPoints; 
+(id)fetchRequest;
+(id)managedObjectWithFingerprint:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)fetchLastByStartDateInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
@end

