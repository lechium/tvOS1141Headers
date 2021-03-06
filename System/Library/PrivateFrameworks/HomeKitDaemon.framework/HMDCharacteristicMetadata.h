/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@class NSNumber, NSString, NSArray;

@interface HMDCharacteristicMetadata : HMFObject <NSSecureCoding, HMFDumpState> {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;
	NSNumber* _maxLength;
	NSString* _format;
	NSString* _units;
	NSString* _manufacturerDescription;
	NSArray* _validValues;

}

@property (nonatomic,readonly) NSNumber * minimumValue;                              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumValue;                              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) NSNumber * stepValue;                                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maxLength;                                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy,readonly) NSString * format;                               //@synthesize format=_format - In the implementation block
@property (nonatomic,copy,readonly) NSString * units;                                //@synthesize units=_units - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturerDescription;              //@synthesize manufacturerDescription=_manufacturerDescription - In the implementation block
@property (nonatomic,copy) NSArray * validValues;                                    //@synthesize validValues=_validValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)isValidMetadata:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)format;
-(NSNumber *)maxLength;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(NSNumber *)stepValue;
-(id)dumpState;
-(NSString *)units;
-(NSString *)manufacturerDescription;
-(NSArray *)validValues;
-(BOOL)configureWithCharacteristicMetadata:(id)arg1 ;
-(id)_descriptionDetails;
-(id)initWithCharacteristicMetadata:(id)arg1 ;
-(id)getMetadataDictionary;
-(void)setValidValues:(NSArray *)arg1 ;
@end

