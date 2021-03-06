/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSNumber, NSSet, NetworkAttachment;

@interface Flow : NSManagedObject

@property (nonatomic,retain) NSDate * firstTimeStamp; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSNumber * kind; 
@property (nonatomic,retain) NSString * remoteID; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSSet * hasLivePerformance; 
@property (nonatomic,retain) NetworkAttachment * onNetwork; 
@end

