/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@interface CHPatternGraph : NSObject {

	PatternGraph* _graph;

}

@property (assign,nonatomic) PatternGraph* graph;              //@synthesize graph=_graph - In the implementation block
+(PatternGraph*)sharedRootCursor;
+(PatternGraph*)sharedCursorByAdvancingWithCharacterTypes:(unsigned*)arg1 withLength:(unsigned long long)arg2 fromCursor:(PatternGraph*)arg3 ;
+(id)sharedPatternGraph;
-(PatternGraph*)graph;
-(void)setGraph:(PatternGraph*)arg1 ;
-(id)init;
-(void)dealloc;
@end
