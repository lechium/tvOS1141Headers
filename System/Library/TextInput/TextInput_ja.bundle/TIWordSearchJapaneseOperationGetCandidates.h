/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIWordSearchOperationGetCandidates.h>

@class NSString;

@interface TIWordSearchJapaneseOperationGetCandidates : TIWordSearchOperationGetCandidates {

	BOOL _flickUsed;
	BOOL _phraseBoundarySet;
	NSString* _contextString;

}

@property (nonatomic,readonly) NSString * contextString;              //@synthesize contextString=_contextString - In the implementation block
@property (assign,nonatomic) BOOL flickUsed;                          //@synthesize flickUsed=_flickUsed - In the implementation block
@property (assign,nonatomic) BOOL phraseBoundarySet;                  //@synthesize phraseBoundarySet=_phraseBoundarySet - In the implementation block
-(void)dealloc;
-(BOOL)phraseBoundarySet;
-(NSString *)contextString;
-(BOOL)flickUsed;
-(void)setFlickUsed:(BOOL)arg1 ;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 contextString:(id)arg3 predictionEnabled:(BOOL)arg4 reanalysisMode:(BOOL)arg5 autocapitalizationType:(unsigned long long)arg6 target:(id)arg7 action:(SEL)arg8 geometryModelData:(id)arg9 flickUsed:(BOOL)arg10 phraseBoundarySet:(BOOL)arg11 ;
-(void)setPhraseBoundarySet:(BOOL)arg1 ;
@end

