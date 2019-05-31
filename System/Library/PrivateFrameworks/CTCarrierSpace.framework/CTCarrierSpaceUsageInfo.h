/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CTCarrierSpaceUsageInfo : NSObject <NSSecureCoding> {

	NSArray* _accountMetrics;
	NSString* _moreDetailsURL;

}

@property (nonatomic,retain) NSArray * accountMetrics;               //@synthesize accountMetrics=_accountMetrics - In the implementation block
@property (nonatomic,retain) NSString * moreDetailsURL;              //@synthesize moreDetailsURL=_moreDetailsURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSArray *)accountMetrics;
-(NSString *)moreDetailsURL;
-(void)setAccountMetrics:(NSArray *)arg1 ;
-(void)setMoreDetailsURL:(NSString *)arg1 ;
@end

