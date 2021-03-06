/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface CNPostalAddressFormattingSpecification : NSObject {

	NSArray* _displayFieldArrangement;
	NSArray* _editingFieldArrangement;
	NSDictionary* _fieldLabelMap;

}

@property (nonatomic,readonly) NSDictionary * fieldLabelMap;                   //@synthesize fieldLabelMap=_fieldLabelMap - In the implementation block
@property (nonatomic,readonly) NSArray * displayFieldArrangement;              //@synthesize displayFieldArrangement=_displayFieldArrangement - In the implementation block
@property (nonatomic,readonly) NSArray * editingFieldArrangement;              //@synthesize editingFieldArrangement=_editingFieldArrangement - In the implementation block
-(id)localizedPlaceholderForKey:(id)arg1 ;
-(id)initWithDisplayFieldArrangement:(id)arg1 editingFieldArrangement:(id)arg2 fieldLabelMap:(id)arg3 ;
-(NSDictionary *)fieldLabelMap;
-(NSArray *)displayFieldArrangement;
-(NSArray *)editingFieldArrangement;
@end

