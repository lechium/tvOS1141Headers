/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDSymptomsNetworkDebuggabilityFrameworkIssue : PBCodable <NSCopying> {

	SCD_Struct_AW5* _ndfAppSymptoms;
	SCD_Struct_AW5* _ndfNetworkTypes;
	unsigned long long _ndfCount;
	unsigned long long _ndfDampeningFactor;
	unsigned long long _ndfDuration;
	long long _ndfLQM;
	long long _ndfSymptomPoint;
	unsigned long long _timestamp;
	NSMutableArray* _ndfAppNames;
	int _ndfSessionType;
	NSMutableArray* _ndfSignatures;
	int _ndfTriggerType;
	SCD_Struct_AW25 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long ndfNetworkTypesCount; 
@property (nonatomic,readonly) int* ndfNetworkTypes; 
@property (assign,nonatomic) BOOL hasNdfCount; 
@property (assign,nonatomic) unsigned long long ndfCount;                            //@synthesize ndfCount=_ndfCount - In the implementation block
@property (assign,nonatomic) BOOL hasNdfDuration; 
@property (assign,nonatomic) unsigned long long ndfDuration;                         //@synthesize ndfDuration=_ndfDuration - In the implementation block
@property (assign,nonatomic) BOOL hasNdfDampeningFactor; 
@property (assign,nonatomic) unsigned long long ndfDampeningFactor;                  //@synthesize ndfDampeningFactor=_ndfDampeningFactor - In the implementation block
@property (assign,nonatomic) BOOL hasNdfTriggerType; 
@property (assign,nonatomic) int ndfTriggerType;                                     //@synthesize ndfTriggerType=_ndfTriggerType - In the implementation block
@property (nonatomic,retain) NSMutableArray * ndfAppNames;                           //@synthesize ndfAppNames=_ndfAppNames - In the implementation block
@property (nonatomic,readonly) unsigned long long ndfAppSymptomsCount; 
@property (nonatomic,readonly) int* ndfAppSymptoms; 
@property (assign,nonatomic) BOOL hasNdfLQM; 
@property (assign,nonatomic) long long ndfLQM;                                       //@synthesize ndfLQM=_ndfLQM - In the implementation block
@property (assign,nonatomic) BOOL hasNdfSessionType; 
@property (assign,nonatomic) int ndfSessionType;                                     //@synthesize ndfSessionType=_ndfSessionType - In the implementation block
@property (nonatomic,retain) NSMutableArray * ndfSignatures;                         //@synthesize ndfSignatures=_ndfSignatures - In the implementation block
@property (assign,nonatomic) BOOL hasNdfSymptomPoint; 
@property (assign,nonatomic) long long ndfSymptomPoint;                              //@synthesize ndfSymptomPoint=_ndfSymptomPoint - In the implementation block
+(Class)ndfAppNameType;
+(Class)ndfSignatureType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setNdfSessionType:(int)arg1 ;
-(void)addNdfAppSymptom:(int)arg1 ;
-(void)setNdfDuration:(unsigned long long)arg1 ;
-(void)setNdfCount:(unsigned long long)arg1 ;
-(void)setNdfDampeningFactor:(unsigned long long)arg1 ;
-(void)addNdfNetworkType:(int)arg1 ;
-(void)setNdfTriggerType:(int)arg1 ;
-(void)setNdfAppNames:(NSMutableArray *)arg1 ;
-(void)setNdfLQM:(long long)arg1 ;
-(void)setNdfSignatures:(NSMutableArray *)arg1 ;
-(void)addNdfAppName:(id)arg1 ;
-(void)addNdfSignature:(id)arg1 ;
-(unsigned long long)ndfNetworkTypesCount;
-(void)clearNdfNetworkTypes;
-(int)ndfNetworkTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ndfAppNamesCount;
-(void)clearNdfAppNames;
-(id)ndfAppNameAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ndfAppSymptomsCount;
-(void)clearNdfAppSymptoms;
-(int)ndfAppSymptomAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ndfSignaturesCount;
-(void)clearNdfSignatures;
-(id)ndfSignatureAtIndex:(unsigned long long)arg1 ;
-(int*)ndfNetworkTypes;
-(void)setNdfNetworkTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)ndfNetworkTypesAsString:(int)arg1 ;
-(int)StringAsNdfNetworkTypes:(id)arg1 ;
-(void)setHasNdfCount:(BOOL)arg1 ;
-(BOOL)hasNdfCount;
-(void)setHasNdfDuration:(BOOL)arg1 ;
-(BOOL)hasNdfDuration;
-(void)setHasNdfDampeningFactor:(BOOL)arg1 ;
-(BOOL)hasNdfDampeningFactor;
-(int)ndfTriggerType;
-(void)setHasNdfTriggerType:(BOOL)arg1 ;
-(BOOL)hasNdfTriggerType;
-(id)ndfTriggerTypeAsString:(int)arg1 ;
-(int)StringAsNdfTriggerType:(id)arg1 ;
-(int*)ndfAppSymptoms;
-(void)setNdfAppSymptoms:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)ndfAppSymptomsAsString:(int)arg1 ;
-(int)StringAsNdfAppSymptoms:(id)arg1 ;
-(void)setHasNdfLQM:(BOOL)arg1 ;
-(BOOL)hasNdfLQM;
-(int)ndfSessionType;
-(void)setHasNdfSessionType:(BOOL)arg1 ;
-(BOOL)hasNdfSessionType;
-(id)ndfSessionTypeAsString:(int)arg1 ;
-(int)StringAsNdfSessionType:(id)arg1 ;
-(void)setNdfSymptomPoint:(long long)arg1 ;
-(void)setHasNdfSymptomPoint:(BOOL)arg1 ;
-(BOOL)hasNdfSymptomPoint;
-(unsigned long long)ndfCount;
-(unsigned long long)ndfDuration;
-(unsigned long long)ndfDampeningFactor;
-(NSMutableArray *)ndfAppNames;
-(long long)ndfLQM;
-(NSMutableArray *)ndfSignatures;
-(long long)ndfSymptomPoint;
@end

