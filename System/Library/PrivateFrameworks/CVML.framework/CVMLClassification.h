/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVMLObservation.h>

@class NSString;

@interface CVMLClassification : CVMLObservation {

	NSString* _classification;
	float _confidence;

}

@property (readonly) NSString * classification;              //@synthesize classification=_classification - In the implementation block
-(id)debugDescription;
-(float)confidence;
-(void)setConfidence:(float)arg1 ;
-(NSString *)classification;
-(void)setClassification:(id)arg1 withConfidence:(float)arg2 ;
@end
