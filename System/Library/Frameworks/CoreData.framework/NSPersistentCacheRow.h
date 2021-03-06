/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface NSPersistentCacheRow : NSObject {

	int _cd_rc;
	int _externalReferenceCount;
	struct {
		unsigned _invalidToOnes : 1;
		unsigned _hasTemporaryID : 1;
		unsigned _backgroundDealloc : 1;
		unsigned _reservedFlags : 1;
		unsigned _virtualfk_count : 14;
		unsigned _ordkey_count : 14;
	}  _externalRefFlags;
	id* _toManyMap;
	double _birth;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(const id*)knownKeyValuesPointer;
-(void)updateMissingRelationshipCachesFromOriginal:(id)arg1 ;
-(void)incrementRefCount;
-(int)externalReferenceCount;
-(void)incrementExternalReferenceCount:(int)arg1 ;
-(void)setRelatedObjectIDs:(id)arg1 forProperty:(id)arg2 options:(unsigned)arg3 andTimestamp:(double)arg4 ;
-(void)releaseRelationshipCaches;
-(id)initWithOptions:(unsigned)arg1 andTimestamp:(double)arg2 ;
-(int)decrementRefCount;
-(void)_initializeRelationshipCaches;
-(unsigned long long)toManyOffsetForProperty:(id)arg1 ;
-(void)copyRelationshipCachesFrom:(id)arg1 ;
-(id)relatedObjectIDsForProperty:(id)arg1 ;
-(double)timestampForProperty:(id)arg1 ;
-(id)ancillaryOrderKeysForProperty:(id)arg1 ;
-(void)setAncillaryOrderKeys:(id)arg1 forProperty:(id)arg2 options:(unsigned)arg3 andTimestamp:(double)arg4 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned long long)retainCount;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)_isDeallocating;
-(unsigned)options;
-(BOOL)_tryRetain;
-(unsigned long long)version;
-(id)objectID;
@end

