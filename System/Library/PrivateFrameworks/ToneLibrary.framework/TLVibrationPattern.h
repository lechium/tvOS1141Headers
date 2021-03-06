/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableArray;

@interface TLVibrationPattern : NSObject {

	NSDictionary* _propertyListRepresentation;
	NSMutableArray* _complexPatternDescription;
	id _contextObject;

}

@property (nonatomic,readonly) id _artificiallyRepeatingPropertyListRepresentation; 
@property (nonatomic,readonly) id propertyListRepresentation; 
@property (nonatomic,retain) id contextObject;                                                   //@synthesize contextObject=_contextObject - In the implementation block
+(BOOL)isValidVibrationPatternPropertyListRepresentation:(id)arg1 ;
+(id)noneVibrationPattern;
+(id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2 ;
+(id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1 ;
-(id)init;
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)_artificiallyRepeatingPropertyListRepresentation;
-(id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(BOOL)arg2 ;
-(double)_computedDuration;
-(void)appendVibrationComponentWithDuration:(double)arg1 isPause:(BOOL)arg2 ;
-(void)setContextObject:(id)arg1 ;
-(id)contextObject;
@end

