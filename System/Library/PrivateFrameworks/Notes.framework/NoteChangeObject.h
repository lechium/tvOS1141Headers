/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NoteStoreObject, NSNumber, NSMutableSet;

@interface NoteChangeObject : NSManagedObject

@property (nonatomic,retain) NoteStoreObject * store; 
@property (nonatomic,retain) NSNumber * changeType; 
@property (nonatomic,retain) NSMutableSet * noteIntegerIds; 
@property (nonatomic,retain) NSMutableSet * noteServerIds; 
@property (nonatomic,retain) NSMutableSet * noteServerIntIds; 
@end
