/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSDictionary, NSString;

@interface CSVTUIASRGrammars : NSObject <NSURLSessionDelegate> {

	NSDictionary* _grammar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedGrammars;
-(id)init;
-(id)createGrammars;
-(id)_getTrailingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2 ;
-(id)_getLeadingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2 ;
-(id)_getRegexPatternsWithGrammars:(id)arg1 withUtt:(long long)arg2 withLocale:(id)arg3 ;
-(id)_getLMEWithGrammar:(id)arg1 withLocale:(id)arg2 ;
-(id)getTrailingPatternsForUtt:(long long)arg1 Locale:(id)arg2 ;
-(id)getLeadingPatternsForUtt:(long long)arg1 Locale:(id)arg2 ;
-(id)getRegexPatternsForUtt:(long long)arg1 Locale:(id)arg2 ;
-(id)getLMEforLocale:(id)arg1 ;
@end

