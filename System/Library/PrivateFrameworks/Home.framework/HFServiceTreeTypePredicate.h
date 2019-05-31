/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFServiceTreeMatching.h>

@class NSSet, NSString;

@interface HFServiceTreeTypePredicate : NSObject <HFServiceTreeMatching> {

	BOOL _includeChildServices;
	NSSet* _serviceTypes;
	NSSet* _serviceSubtypes;

}

@property (nonatomic,copy,readonly) NSSet * serviceTypes;                 //@synthesize serviceTypes=_serviceTypes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * serviceSubtypes;              //@synthesize serviceSubtypes=_serviceSubtypes - In the implementation block
@property (nonatomic,readonly) BOOL includeChildServices;                 //@synthesize includeChildServices=_includeChildServices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)anyServiceTypePredicate;
+(id)predicateWithServiceType:(id)arg1 ;
+(id)predicateWithServiceType:(id)arg1 includeChildServices:(BOOL)arg2 ;
+(id)anyServiceTypePredicateIncludingChildServices;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSSet *)serviceTypes;
-(id)initWithServiceTypes:(id)arg1 serviceSubtypes:(id)arg2 includeChildServices:(BOOL)arg3 ;
-(NSSet *)serviceSubtypes;
-(BOOL)_matchesService:(id)arg1 ;
-(BOOL)includeChildServices;
-(id)matchingServicesForRootService:(id)arg1 ;
@end

