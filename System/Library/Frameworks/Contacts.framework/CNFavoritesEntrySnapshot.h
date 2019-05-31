/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CNFavoritesEntry;

@interface CNFavoritesEntrySnapshot : NSObject {

	int _abIdentifier;
	int _abUid;
	NSString* _value;
	NSString* _name;
	NSString* _label;
	NSString* _abDatabaseUUID;
	NSString* _propertyKey;
	NSString* _labeledValueIdentifier;
	CNFavoritesEntry* _originalEntry;

}

@property (nonatomic,copy) NSString * value;                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * label;                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * abDatabaseUUID;                         //@synthesize abDatabaseUUID=_abDatabaseUUID - In the implementation block
@property (nonatomic,copy) NSString * propertyKey;                            //@synthesize propertyKey=_propertyKey - In the implementation block
@property (nonatomic,copy) NSString * labeledValueIdentifier;                 //@synthesize labeledValueIdentifier=_labeledValueIdentifier - In the implementation block
@property (assign,nonatomic) int abIdentifier;                                //@synthesize abIdentifier=_abIdentifier - In the implementation block
@property (assign,nonatomic) int abUid;                                       //@synthesize abUid=_abUid - In the implementation block
@property (nonatomic,readonly) CNFavoritesEntry * originalEntry;              //@synthesize originalEntry=_originalEntry - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(CNFavoritesEntry *)originalEntry;
-(NSString *)abDatabaseUUID;
-(void)setPropertyKey:(NSString *)arg1 ;
-(void)setLabeledValueIdentifier:(NSString *)arg1 ;
-(void)setAbUid:(int)arg1 ;
-(void)setAbDatabaseUUID:(NSString *)arg1 ;
-(NSString *)propertyKey;
-(int)abUid;
-(NSString *)labeledValueIdentifier;
-(id)initWithOriginalEntry:(id)arg1 ;
-(int)abIdentifier;
-(void)setAbIdentifier:(int)arg1 ;
@end

