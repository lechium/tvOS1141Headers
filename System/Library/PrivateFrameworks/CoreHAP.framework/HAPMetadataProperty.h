/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber;

@interface HAPMetadataProperty : HMFObject {

	NSString* _propertyType;
	NSNumber* _bitPosition;
	NSString* _propertyDescription;

}

@property (nonatomic,retain) NSString * propertyType;                     //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,retain) NSNumber * bitPosition;                      //@synthesize bitPosition=_bitPosition - In the implementation block
@property (nonatomic,retain) NSString * propertyDescription;              //@synthesize propertyDescription=_propertyDescription - In the implementation block
+(id)init:(id)arg1 withDictionary:(id)arg2 ;
-(void)dump;
-(NSString *)propertyType;
-(void)setPropertyDescription:(NSString *)arg1 ;
-(id)description;
-(void)setPropertyType:(NSString *)arg1 ;
-(id)generateDictionary;
-(id)initWithType:(id)arg1 bitPosition:(id)arg2 description:(id)arg3 ;
-(NSNumber *)bitPosition;
-(void)setBitPosition:(NSNumber *)arg1 ;
-(NSString *)propertyDescription;
@end
