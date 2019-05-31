/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary;

@interface SCNProgram : NSObject <NSCopying, NSSecureCoding> {

	NSString* _vertexShader;
	NSString* _fragmentShader;
	NSString* _vertexFunctionName;
	NSString* _fragmentFunctionName;
	NSString* _name;
	NSMutableDictionary* _semanticInfos;
	BOOL _opaque;
	id _library;
	id _delegate;
	NSMutableDictionary* _bufferBindings;

}

@property (nonatomic,copy) NSString * vertexShader; 
@property (nonatomic,copy) NSString * fragmentShader; 
@property (nonatomic,copy) NSString * vertexFunctionName; 
@property (nonatomic,copy) NSString * fragmentFunctionName; 
@property (assign,getter=isOpaque,nonatomic) BOOL opaque; 
@property (assign,nonatomic) id<SCNProgramDelegate> delegate; 
@property (nonatomic,retain) id<MTLLibrary> library; 
+(BOOL)supportsSecureCoding;
+(id)program;
+(id)programWithLibrary:(id)arg1 ;
-(id)init;
-(id)copy;
-(id<SCNProgramDelegate>)delegate;
-(void)setOpaque:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SCNProgramDelegate>)arg1 ;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isOpaque;
-(id<MTLLibrary>)library;
-(void)setLibrary:(id<MTLLibrary>)arg1 ;
-(void)setVertexShader:(NSString *)arg1 ;
-(void)setFragmentShader:(NSString *)arg1 ;
-(void)setVertexFunctionName:(NSString *)arg1 ;
-(void)setFragmentFunctionName:(NSString *)arg1 ;
-(void)handleBindingOfBufferNamed:(id)arg1 frequency:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setSemantic:(id)arg1 forSymbol:(id)arg2 options:(id)arg3 ;
-(id)semanticForSymbol:(id)arg1 ;
-(NSString *)vertexShader;
-(NSString *)fragmentShader;
-(NSString *)vertexFunctionName;
-(NSString *)fragmentFunctionName;
-(void)setSemanticInfos:(id)arg1 ;
-(void)_customEncodingOfSCNProgram:(id)arg1 ;
-(void)_customDecodingOfSCNProgram:(id)arg1 ;
-(int)shadingLanguage;
-(id)_optionsForSymbol:(id)arg1 ;
-(id)_allSymbolsWithSceneKitSemantic;
-(id)_bufferBindings;
-(void)setSemantic:(id)arg1 forSymbol:(id)arg2 ;
@end

