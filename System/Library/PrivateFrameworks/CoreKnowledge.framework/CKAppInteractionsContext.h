/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreKnowledge/CoreKnowledge-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CKAppInteractionsContext : NSObject <NSCopying, NSSecureCoding> {

	 _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
	 numberOfDiscardedDonationsByIntentTypeAndBundleId;

}

@property (copy,nonatomic) NSDictionary * _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;                 //@synthesize outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId=_outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId - In the implementation block
@property (readonly,nonatomic) NSDictionary * outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId; 
@property (copy,nonatomic) NSDictionary * numberOfDiscardedDonationsByIntentTypeAndBundleId; 
+(BOOL)supportsSecureCoding;
-(id)init:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(void*)arg1 ;
-(NSDictionary *)_outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
-(void)set_outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId:(NSDictionary *)arg1 ;
-(NSDictionary *)outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;
-(NSDictionary *)numberOfDiscardedDonationsByIntentTypeAndBundleId;
-(void)setNumberOfDiscardedDonationsByIntentTypeAndBundleId:(NSDictionary *)arg1 ;
-(void)incrementNumberOfOutOfAppLaunchBoundaryDonationsForBundleId:(id)arg1 intent:(id)arg2 ;
-(void)updateDiscardedDonations:(double)arg1 forIntentType:(id)arg2 andBundleId:(id)arg3 ;
@end

