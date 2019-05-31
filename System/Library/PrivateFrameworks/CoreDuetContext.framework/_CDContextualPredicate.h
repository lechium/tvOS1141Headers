/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSPredicate;

@interface _CDContextualPredicate : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _keyPaths;
	NSPredicate* _predicate;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSSet * keyPaths;                       //@synthesize keyPaths=_keyPaths - In the implementation block
@property (nonatomic,readonly) BOOL firesOnAnyChange; 
+(id)predicateForChangeAtKeyPaths:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)predicateForKeyPath:(id)arg1 withFormat:(id)arg2 ;
+(id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 ;
+(id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2 ;
+(id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 ;
+(id)notPredicateWithSubpredicate:(id)arg1 ;
+(id)orPredicateWithSubpredicates:(id)arg1 ;
+(id)andPredicateWithSubpredicates:(id)arg1 ;
+(id)predicateForChangeAtKeyPath:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setKeyPaths:(NSSet *)arg1 ;
-(BOOL)firesOnAnyChange;
-(NSSet *)keyPaths;
@end
