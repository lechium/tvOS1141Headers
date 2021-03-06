/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>

@protocol MDLObjectContainerComponent;
@class NSMapTable, NSString, NSArray;

@interface MDLObject : NSObject <MDLNamed> {

	MDLObject* _parent;
	NSMapTable* _components;
	MDLObject* _instance;
	BOOL _hidden;
	NSString* name;
	id<MDLObjectContainerComponent> _children;

}

@property (nonatomic,copy,readonly) NSArray * components; 
@property (assign,nonatomic,__weak) MDLObject * parent; 
@property (nonatomic,retain) MDLObject * instance;                                  //@synthesize instance=_instance - In the implementation block
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,retain) id<MDLTransformComponent> transform; 
@property (nonatomic,retain) id<MDLObjectContainerComponent> children;              //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                           //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSString * name; 
-(id)init;
-(void)setHidden:(BOOL)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)path;
-(void)setTransform:(id<MDLTransformComponent>)arg1 ;
-(id<MDLTransformComponent>)transform;
-(MDLObject *)parent;
-(void)addChild:(id)arg1 ;
-(id<MDLObjectContainerComponent>)children;
-(BOOL)hidden;
-(NSArray *)components;
-(SCD_Struct_MD20)boundingBoxAtTime:(double)arg1 ;
-(void)setComponent:(id)arg1 forProtocol:(id)arg2 ;
-(void)enumerateChildObjectsOfClass:(Class)arg1 root:(id)arg2 usingBlock:(/*^block*/id)arg3 stopPointer:(BOOL*)arg4 ;
-(id)objectAtPath:(id)arg1 ;
-(void)setInstance:(MDLObject *)arg1 ;
-(id)componentConformingToProtocol:(id)arg1 ;
-(MDLObject *)instance;
-(void)setParent:(MDLObject *)arg1 ;
-(void)setChildren:(id<MDLObjectContainerComponent>)arg1 ;
@end

