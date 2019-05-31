/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNProgram, NSDictionary, NSMutableArray, NSArray;

@interface SCNShadableHelper : NSObject <NSSecureCoding> {

	id _owner;
	SCNProgram* _program;
	NSDictionary* _shaderModifiers;
	NSMutableArray* _argumentsNames;
	NSDictionary* _symbolToBinder;
	NSDictionary* _symbolToUnbinder;

}

@property (nonatomic,copy) NSDictionary * shaderModifiers; 
@property (nonatomic,retain) SCNProgram * program; 
@property (nonatomic,readonly) id owner; 
@property (nonatomic,readonly) NSArray * shaderModifiersArgumentsNames; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)_commonInit;
-(BOOL)isOpaque;
-(id)owner;
-(id)initWithOwner:(id)arg1 ;
-(const void*)__CFObject;
-(SCNProgram *)program;
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(C3DFXTechniqueRef)_technique;
-(void)ownerWillDie;
-(void)setProgram:(SCNProgram *)arg1 ;
-(NSDictionary *)shaderModifiers;
-(void)setShaderModifiers:(NSDictionary *)arg1 ;
-(NSArray *)shaderModifiersArgumentsNames;
-(void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_stopObservingProgram;
-(void)_programDidChange:(id)arg1 ;
-(void)_setC3DProgram;
-(void)_startObservingProgram;
-(void)_shaderModifiersDidChange;
-(void)_updateC3DProgramInputForSymbol:(id)arg1 ;
-(C3DFXGLSLProgramRef)_programFromPassAtIndex:(long long)arg1 ;
-(void)_updateC3DProgramInput:(C3DFXGLSLProgramRef)arg1 forSymbol:(id)arg2 ;
-(void)_updateAllC3DProgramInputs;
-(void)_setC3DProgramDelegate;
-(void)_customEncodingOfSCNShadableHelper:(id)arg1 ;
-(void)_customDecodingOfSCNShadableHelper:(id)arg1 ;
-(void)_didDecodeSCNShadableHelper:(id)arg1 ;
-(BOOL)_bindValueForSymbol:(id)arg1 atLocation:(unsigned)arg2 programID:(unsigned)arg3 node:(id)arg4 renderer:(id)arg5 ;
-(void)_unbindValueForSymbol:(id)arg1 atLocation:(unsigned)arg2 programID:(unsigned)arg3 node:(id)arg4 renderer:(id)arg5 ;
@end

