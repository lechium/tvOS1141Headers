/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSDate;

@interface _CDContextualChangeRegistrationMO : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSData * properties; 
@property (nonatomic,retain) NSDate * creationDate; 
+(void)hydrateMO:(id)arg1 fromRegistration:(id)arg2 ;
+(id)materializedRegistrationFrom:(id)arg1 ;
@end
