/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIWordSearch.h>

@interface TIWordSearchShapeBased : TIWordSearch
-(BOOL)canHandleKeyHitTest;
-(id)autoconvertLongestValidPrefixes:(id)arg1 option:(unsigned long long)arg2 candidateResultSet:(id)arg3 autoconvertedCandidateArray:(id*)arg4 ;
-(BOOL)validateCode:(id)arg1 withOption:(unsigned long long)arg2 ;
-(BOOL)addTopCandidateForCode:(id)arg1 option:(unsigned long long)arg2 autoconvertedCandidates:(id)arg3 candidateRefsDictionary:(id)arg4 ;
@end
