/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCarrierSpaceUsagePlanItemVoice : NSObject <NSSecureCoding> {

	NSString* _minutesCapacity;
	NSString* _minutesUsed;

}

@property (nonatomic,retain) NSString * minutesCapacity;              //@synthesize minutesCapacity=_minutesCapacity - In the implementation block
@property (nonatomic,retain) NSString * minutesUsed;                  //@synthesize minutesUsed=_minutesUsed - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)minutesCapacity;
-(NSString *)minutesUsed;
-(void)setMinutesCapacity:(NSString *)arg1 ;
-(void)setMinutesUsed:(NSString *)arg1 ;
@end
