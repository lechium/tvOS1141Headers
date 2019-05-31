/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <Notes/NoteCollectionObject.h>

@class NSString, NoteAccountObject, NSSet;

@interface NoteStoreObject : NoteCollectionObject

@property (nonatomic,retain) NSString * externalIdentifier; 
@property (nonatomic,retain) NoteAccountObject * account; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSSet * changes; 
@property (nonatomic,retain) NSString * syncAnchor; 
-(id)collectionInfo;
-(id)predicateForNotes;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)basicAccountIdentifier;
-(id)notesForServerIntIds:(id)arg1 ascending:(BOOL)arg2 limit:(unsigned long long)arg3 ;
-(id)notesForServerIntIdsInRange:(NSRange)arg1 ascending:(BOOL)arg2 limit:(unsigned long long)arg3 ;
-(id)notesForServerIds:(id)arg1 ;
-(id)notesForGUIDs:(id)arg1 ;
-(id)notesForServerIntIds:(id)arg1 ;
-(id)notesForServerIntIdsInRange:(NSRange)arg1 ;
-(unsigned)maximumServerIntId;
-(unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg1 ;
-(id)notesForIntegerIds:(id)arg1 ;
@end

