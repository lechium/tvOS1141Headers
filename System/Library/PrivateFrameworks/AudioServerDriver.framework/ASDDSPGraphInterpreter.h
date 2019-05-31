/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioServerDriver/AudioServerDriver-Structs.h>
@interface ASDDSPGraphInterpreter : NSObject {

	unique_ptr<DSPGraph::Interpreter, std::__1::default_delete<DSPGraph::Interpreter> >* _interpreter;

}
+(id)compileText:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3 ;
+(id)compileFile:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3 ;
+(unordered_map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > >*)stringMapFromStringDictionary:(id)arg1 ;
+(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)stringVectorFromStringArray:(id)arg1 ;
-(id)init;
-(id)compileText:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3 ;
-(id)compileFile:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3 ;
@end

