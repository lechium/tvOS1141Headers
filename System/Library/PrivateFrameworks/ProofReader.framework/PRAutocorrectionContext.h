/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRAutocorrectionContext : NSObject {

	unsigned long long _modificationMask;

}
+(id)autocorrectionContextOfType:(unsigned long long)arg1 ;
+(void)clearCaches;
-(void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3 ;
-(id)currentModifications;
-(id)addedModifications;
-(id)removedModifications;
-(void)addInputCharacter:(unsigned short)arg1 geometryData:(id)arg2 ;
-(void)setModificationMask:(unsigned long long)arg1 ;
-(unsigned long long)modificationMask;
-(id)prefixes;
-(id)guesses;
-(void)setValidSequenceCorrectionThreshold:(double)arg1 ;
-(double)validSequenceCorrectionThreshold;
-(void)reset;
-(id)correction;
-(id)completions;
@end

