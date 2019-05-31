/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSString, NSDictionary, NSMutableDictionary;

@interface UIStoryboard : NSObject {

	NSBundle* bundle;
	NSString* storyboardFileName;
	NSDictionary* identifierToNibNameMap;
	NSDictionary* identifierToExternalStoryboardReferenceMap;
	NSString* designatedEntryPointIdentifier;
	NSMutableDictionary* identifierToUINibMap;

}

@property (nonatomic,readonly) NSString * storyboardFileName; 
@property (nonatomic,readonly) NSDictionary * identifierToNibNameMap; 
@property (nonatomic,readonly) NSDictionary * identifierToExternalStoryboardReferenceMap; 
@property (nonatomic,readonly) NSString * designatedEntryPointIdentifier; 
@property (nonatomic,readonly) NSMutableDictionary * identifierToUINibMap; 
@property (nonatomic,readonly) NSBundle * bundle; 
@property (readonly) NSString * name; 
+(id)storyboardWithName:(id)arg1 bundle:(id)arg2 ;
-(void)dealloc;
-(NSString *)name;
-(id)instantiateInitialViewController;
-(id)instantiateViewControllerWithIdentifier:(id)arg1 ;
-(BOOL)containsNibNamed:(id)arg1 ;
-(id)nibForStoryboardNibNamed:(id)arg1 ;
-(NSBundle *)bundle;
-(id)identifierForStringsFile;
-(id)instantiateViewControllerReferencedByPlaceholderWithIdentifier:(id)arg1 ;
-(id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 identifierToExternalStoryboardReferenceMap:(id)arg4 designatedEntryPointIdentifier:(id)arg5 ;
-(NSString *)storyboardFileName;
-(NSDictionary *)identifierToNibNameMap;
-(NSDictionary *)identifierToExternalStoryboardReferenceMap;
-(id)referencedStoryboardForExternalReferenceInfo:(id)arg1 ;
-(id)nibForViewControllerWithIdentifier:(id)arg1 ;
-(NSString *)designatedEntryPointIdentifier;
-(NSMutableDictionary *)identifierToUINibMap;
@end
