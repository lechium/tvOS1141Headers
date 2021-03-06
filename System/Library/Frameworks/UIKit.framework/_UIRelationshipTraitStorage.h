/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UITraitStorage.h>

@class NSOrderedSet;

@interface _UIRelationshipTraitStorage : _UITraitStorage {

	NSOrderedSet* _relationshipCandidates;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)applyRecordsMatchingTraitCollection:(id)arg1 ;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 relationshipCandidates:(id)arg3 ;
-(void)addRecordWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3 ;
@end

