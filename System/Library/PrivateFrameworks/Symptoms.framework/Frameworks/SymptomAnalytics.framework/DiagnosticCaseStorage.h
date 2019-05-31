/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface DiagnosticCaseStorage : NSManagedObject

@property (nonatomic,retain) NSString * caseID; 
@property (nonatomic,retain) NSString * caseGroupID; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSDate * caseClosedTime; 
@property (nonatomic,retain) NSString * caseDomain; 
@property (nonatomic,retain) NSString * caseType; 
@property (nonatomic,retain) NSString * caseSubtype; 
@property (nonatomic,retain) NSString * caseSubtypeContext; 
@property (nonatomic,retain) NSString * caseDetectedProcess; 
@property (nonatomic,retain) NSString * caseEffectiveProcess; 
@property (nonatomic,retain) NSString * caseRelatedProcesses; 
@property (nonatomic,retain) NSString * caseThresholdValues; 
@property (assign,nonatomic) short caseState; 
@property (assign,nonatomic) short caseClosureType; 
@property (assign,nonatomic) short caseDampeningType; 
@property (nonatomic,retain) NSString * caseEvents; 
@property (nonatomic,retain) NSString * casePayloads; 
@property (nonatomic,retain) NSString * caseAttachments; 
@property (nonatomic,retain) NSString * caseContext; 
@property (nonatomic,retain) NSString * caseObjectVersion; 
@property (assign,nonatomic) BOOL remoteTrigger; 
@end

