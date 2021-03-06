/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IDSCKServerChangeToken, NSArray;

@interface IDSCKFetchRecordZoneChangesOptions : NSObject <NSSecureCoding, NSCopying> {

	IDSCKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;

}

@property (nonatomic,copy) IDSCKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                               //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                           //@synthesize desiredKeys=_desiredKeys - In the implementation block
+(id)alloc;
+(Class)__class;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(unsigned long long)resultsLimit;
-(NSArray *)desiredKeys;
-(void)setPreviousServerChangeToken:(IDSCKServerChangeToken *)arg1 ;
-(IDSCKServerChangeToken *)previousServerChangeToken;
-(void)setDesiredKeys:(NSArray *)arg1 ;
@end

