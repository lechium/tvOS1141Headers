/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNInstantMessageAddress;

@interface CNPropertyGroupInstantMessageItem : CNPropertyGroupItem

@property (nonatomic,readonly) CNInstantMessageAddress * imAddress; 
+(id)emptyValueForLabel:(id)arg1 ;
-(id)displayLabel;
-(id)defaultActionURL;
-(id)editingStringValue;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 ;
-(CNInstantMessageAddress *)imAddress;
-(id)valueForDisplayString:(id)arg1 ;
@end

