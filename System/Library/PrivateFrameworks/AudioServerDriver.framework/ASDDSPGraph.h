/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioServerDriver/AudioServerDriver-Structs.h>
@class NSString, NSSet;

@interface ASDDSPGraph : NSObject {

	shared_ptr<DSPGraph::Graph>* _graph;

}

@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph;              //@synthesize graph=_graph - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) long long numberOfInputs; 
@property (nonatomic,readonly) long long numberOfOutputs; 
@property (nonatomic,readonly) long long sliceDurationInSamples; 
@property (nonatomic,readonly) BOOL configured; 
@property (nonatomic,readonly) BOOL initialized; 
@property (nonatomic,readonly) NSSet * boxes; 
-(shared_ptr<DSPGraph::Graph>*)graph;
-(long long)numberOfInputs;
-(long long)numberOfOutputs;
-(id)init;
-(BOOL)initialize;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)reset;
-(BOOL)configure;
-(BOOL)initialized;
-(BOOL)configured;
-(BOOL)setAUStrip:(id)arg1 ;
-(BOOL)setPropertyStrip:(id)arg1 ;
-(id)initWithDSPGraph:(shared_ptr<DSPGraph::Graph>*)arg1 ;
-(BOOL)setVariableSliceDuration:(long long)arg1 forSampleRate:(long long)arg2 ;
-(long long)sliceDurationInSamples;
-(BOOL)uninitialize;
-(BOOL)getParameter:(float*)arg1 forID:(unsigned)arg2 ;
-(BOOL)hasParameter:(unsigned)arg1 ;
-(BOOL)setParameter:(float)arg1 forID:(unsigned)arg2 ;
-(BOOL)getPropertySize:(unsigned*)arg1 isWritable:(BOOL*)arg2 forID:(unsigned)arg3 ;
-(BOOL)getProperty:(void*)arg1 withSize:(unsigned*)arg2 forID:(unsigned)arg3 ;
-(BOOL)setProperty:(const void*)arg1 withSize:(unsigned)arg2 forID:(unsigned)arg3 ;
-(id)boxWithName:(id)arg1 ;
-(NSSet *)boxes;
-(BOOL)unconfigure;
@end

