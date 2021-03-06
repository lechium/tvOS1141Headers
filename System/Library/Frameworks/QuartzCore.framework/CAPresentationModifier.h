/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSString, CAPresentationModifierGroup;

@interface CAPresentationModifier : NSObject {

	void* _impl;
	id _keyPath;
	id _value;
	id _group;
	int _l;
	unsigned _f;

}

@property (copy,readonly) NSString * keyPath; 
@property (readonly) BOOL additive; 
@property (readonly) CAPresentationModifierGroup * group; 
@property (retain) id value; 
@property (getter=isEnabled) BOOL enabled; 
-(Object*)CA_copyRenderValue;
-(id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(BOOL)arg3 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setValue:(id)arg1 ;
-(NSString *)keyPath;
-(id)value;
-(id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(BOOL)arg3 group:(id)arg4 ;
-(CAPresentationModifierGroup *)group;
-(BOOL)additive;
-(void)write;
@end

