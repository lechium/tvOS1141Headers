/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBCard.h>
@class NSString, NSArray, NSData, _SFPBURL;


@protocol _SFPBCard <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasType; 
@property (copy) NSArray * cardSections; 
@property (nonatomic,copy) NSData * intentMessageData; 
@property (nonatomic,readonly) BOOL hasIntentMessageData; 
@property (nonatomic,copy) NSString * intentMessageName; 
@property (nonatomic,readonly) BOOL hasIntentMessageName; 
@property (nonatomic,copy) NSData * intentResponseMessageData; 
@property (nonatomic,readonly) BOOL hasIntentResponseMessageData; 
@property (nonatomic,copy) NSString * intentResponseMessageName; 
@property (nonatomic,readonly) BOOL hasIntentResponseMessageName; 
@property (nonatomic,copy) NSArray * dismissalCommands; 
@property (nonatomic,copy) NSString * cardId; 
@property (nonatomic,readonly) BOOL hasCardId; 
@property (nonatomic,copy) NSString * contextReferenceIdentifier; 
@property (nonatomic,readonly) BOOL hasContextReferenceIdentifier; 
@property (nonatomic,retain) _SFPBURL * urlValue; 
@property (nonatomic,readonly) BOOL hasUrlValue; 
@property (assign,nonatomic) int source; 
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,copy) NSData * entityIdentifier; 
@property (nonatomic,readonly) BOOL hasEntityIdentifier; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,readonly) BOOL hasResultIdentifier; 
@property (assign,nonatomic) unsigned long long queryId; 
@property (nonatomic,readonly) BOOL hasQueryId; 
@property (nonatomic,copy) NSString * fbr; 
@property (nonatomic,readonly) BOOL hasFbr; 
@property (assign,nonatomic) BOOL flexibleSectionOrder; 
@property (nonatomic,readonly) BOOL hasFlexibleSectionOrder; 
@property (nonatomic,copy) NSArray * entityProtobufMessages; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)hasType;
-(BOOL)hasUrlValue;
-(_SFPBURL *)urlValue;
-(void)setUrlValue:(id)arg1;
-(BOOL)hasSource;
-(void)setTitle:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)title;
-(void)setType:(int)arg1;
-(int)type;
-(void)setSource:(int)arg1;
-(int)source;
-(BOOL)hasTitle;
-(unsigned long long)queryId;
-(NSData *)jsonData;
-(NSString *)resultIdentifier;
-(void)setResultIdentifier:(id)arg1;
-(NSString *)fbr;
-(void)setFbr:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addCardSections:(id)arg1;
-(void)setIntentMessageData:(id)arg1;
-(void)setIntentMessageName:(id)arg1;
-(void)setIntentResponseMessageData:(id)arg1;
-(void)setIntentResponseMessageName:(id)arg1;
-(void)addDismissalCommands:(id)arg1;
-(void)setCardId:(id)arg1;
-(void)setContextReferenceIdentifier:(id)arg1;
-(void)setQueryId:(unsigned long long)arg1;
-(void)setFlexibleSectionOrder:(BOOL)arg1;
-(void)addEntityProtobufMessages:(id)arg1;
-(NSData *)intentMessageData;
-(NSString *)intentMessageName;
-(NSData *)intentResponseMessageData;
-(NSString *)intentResponseMessageName;
-(NSString *)cardId;
-(NSString *)contextReferenceIdentifier;
-(BOOL)hasQueryId;
-(BOOL)hasFlexibleSectionOrder;
-(NSArray *)cardSections;
-(NSArray *)dismissalCommands;
-(BOOL)flexibleSectionOrder;
-(NSArray *)entityProtobufMessages;
-(void)clearCardSections;
-(unsigned long long)cardSectionsCount;
-(id)cardSectionsAtIndex:(unsigned long long)arg1;
-(void)clearDismissalCommands;
-(unsigned long long)dismissalCommandsCount;
-(id)dismissalCommandsAtIndex:(unsigned long long)arg1;
-(void)clearEntityProtobufMessages;
-(unsigned long long)entityProtobufMessagesCount;
-(id)entityProtobufMessagesAtIndex:(unsigned long long)arg1;
-(void)setCardSections:(id)arg1;
-(BOOL)hasIntentMessageData;
-(BOOL)hasIntentMessageName;
-(BOOL)hasIntentResponseMessageData;
-(BOOL)hasIntentResponseMessageName;
-(void)setDismissalCommands:(id)arg1;
-(BOOL)hasCardId;
-(BOOL)hasContextReferenceIdentifier;
-(BOOL)hasEntityIdentifier;
-(BOOL)hasResultIdentifier;
-(BOOL)hasFbr;
-(void)setEntityProtobufMessages:(id)arg1;
-(NSData *)entityIdentifier;
-(void)setEntityIdentifier:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData, _SFPBURL;

@interface _SFPBCard : PBCodable <_SFPBCard, NSSecureCoding> {

	SCD_Struct_SF4 _has;
	BOOL _flexibleSectionOrder;
	int _type;
	int _source;
	NSString* _title;
	NSArray* _cardSections;
	NSData* _intentMessageData;
	NSString* _intentMessageName;
	NSData* _intentResponseMessageData;
	NSString* _intentResponseMessageName;
	NSArray* _dismissalCommands;
	NSString* _cardId;
	NSString* _contextReferenceIdentifier;
	_SFPBURL* _urlValue;
	NSData* _entityIdentifier;
	NSString* _resultIdentifier;
	unsigned long long _queryId;
	NSString* _fbr;
	NSArray* _entityProtobufMessages;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (assign,nonatomic) int type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (copy) NSArray * cardSections;                                        //@synthesize cardSections=_cardSections - In the implementation block
@property (nonatomic,copy) NSData * intentMessageData;                          //@synthesize intentMessageData=_intentMessageData - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMessageData; 
@property (nonatomic,copy) NSString * intentMessageName;                        //@synthesize intentMessageName=_intentMessageName - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMessageName; 
@property (nonatomic,copy) NSData * intentResponseMessageData;                  //@synthesize intentResponseMessageData=_intentResponseMessageData - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentResponseMessageData; 
@property (nonatomic,copy) NSString * intentResponseMessageName;                //@synthesize intentResponseMessageName=_intentResponseMessageName - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentResponseMessageName; 
@property (nonatomic,copy) NSArray * dismissalCommands;                         //@synthesize dismissalCommands=_dismissalCommands - In the implementation block
@property (nonatomic,copy) NSString * cardId;                                   //@synthesize cardId=_cardId - In the implementation block
@property (nonatomic,readonly) BOOL hasCardId; 
@property (nonatomic,copy) NSString * contextReferenceIdentifier;               //@synthesize contextReferenceIdentifier=_contextReferenceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasContextReferenceIdentifier; 
@property (nonatomic,retain) _SFPBURL * urlValue;                               //@synthesize urlValue=_urlValue - In the implementation block
@property (nonatomic,readonly) BOOL hasUrlValue; 
@property (assign,nonatomic) int source;                                        //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,copy) NSData * entityIdentifier;                           //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityIdentifier; 
@property (nonatomic,copy) NSString * resultIdentifier;                         //@synthesize resultIdentifier=_resultIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasResultIdentifier; 
@property (assign,nonatomic) unsigned long long queryId;                        //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,readonly) BOOL hasQueryId; 
@property (nonatomic,copy) NSString * fbr;                                      //@synthesize fbr=_fbr - In the implementation block
@property (nonatomic,readonly) BOOL hasFbr; 
@property (assign,nonatomic) BOOL flexibleSectionOrder;                         //@synthesize flexibleSectionOrder=_flexibleSectionOrder - In the implementation block
@property (nonatomic,readonly) BOOL hasFlexibleSectionOrder; 
@property (nonatomic,copy) NSArray * entityProtobufMessages;                    //@synthesize entityProtobufMessages=_entityProtobufMessages - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasType;
-(BOOL)hasUrlValue;
-(_SFPBURL *)urlValue;
-(void)setUrlValue:(_SFPBURL *)arg1 ;
-(BOOL)hasSource;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setSource:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)source;
-(BOOL)hasTitle;
-(unsigned long long)queryId;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)resultIdentifier;
-(void)setResultIdentifier:(NSString *)arg1 ;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addCardSections:(id)arg1 ;
-(void)setIntentMessageData:(NSData *)arg1 ;
-(void)setIntentMessageName:(NSString *)arg1 ;
-(void)setIntentResponseMessageData:(NSData *)arg1 ;
-(void)setIntentResponseMessageName:(NSString *)arg1 ;
-(void)addDismissalCommands:(id)arg1 ;
-(void)setCardId:(NSString *)arg1 ;
-(void)setContextReferenceIdentifier:(NSString *)arg1 ;
-(void)setQueryId:(unsigned long long)arg1 ;
-(void)setFlexibleSectionOrder:(BOOL)arg1 ;
-(void)addEntityProtobufMessages:(id)arg1 ;
-(NSData *)intentMessageData;
-(NSString *)intentMessageName;
-(NSData *)intentResponseMessageData;
-(NSString *)intentResponseMessageName;
-(NSString *)cardId;
-(NSString *)contextReferenceIdentifier;
-(BOOL)hasQueryId;
-(BOOL)hasFlexibleSectionOrder;
-(NSArray *)cardSections;
-(NSArray *)dismissalCommands;
-(BOOL)flexibleSectionOrder;
-(NSArray *)entityProtobufMessages;
-(void)clearCardSections;
-(unsigned long long)cardSectionsCount;
-(id)cardSectionsAtIndex:(unsigned long long)arg1 ;
-(void)clearDismissalCommands;
-(unsigned long long)dismissalCommandsCount;
-(id)dismissalCommandsAtIndex:(unsigned long long)arg1 ;
-(void)clearEntityProtobufMessages;
-(unsigned long long)entityProtobufMessagesCount;
-(id)entityProtobufMessagesAtIndex:(unsigned long long)arg1 ;
-(void)setCardSections:(NSArray *)arg1 ;
-(BOOL)hasIntentMessageData;
-(BOOL)hasIntentMessageName;
-(BOOL)hasIntentResponseMessageData;
-(BOOL)hasIntentResponseMessageName;
-(void)setDismissalCommands:(NSArray *)arg1 ;
-(BOOL)hasCardId;
-(BOOL)hasContextReferenceIdentifier;
-(BOOL)hasEntityIdentifier;
-(BOOL)hasResultIdentifier;
-(BOOL)hasFbr;
-(void)setEntityProtobufMessages:(NSArray *)arg1 ;
-(NSData *)entityIdentifier;
-(void)setEntityIdentifier:(NSData *)arg1 ;
@end

