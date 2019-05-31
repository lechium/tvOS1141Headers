/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class CoreDAVItem, NSMutableData, NSDictionary, NSURL, NSString;

@interface CoreDAVXMLElementGenerator : NSObject <NSXMLParserDelegate> {

	int _parsingState;
	SEL _parentElementSetter;
	CoreDAVItem* _element;
	CoreDAVItem* _parentElement;
	CoreDAVXMLElementGenerator* _parentGenerator;
	NSMutableData* _characters;
	NSMutableData* _cDATA;
	CoreDAVXMLElementGenerator* _currentlyParsingSubItem;
	NSDictionary* _cachedElementParseRules;
	BOOL _checkedElementValidityIfRootElement;
	BOOL _isUnrecognized;
	NSURL* _baseURL;

}

@property (assign,nonatomic) BOOL isUnrecognized;                                               //@synthesize isUnrecognized=_isUnrecognized - In the implementation block
@property (assign,nonatomic) BOOL checkedElementValidityIfRootElement;                          //@synthesize checkedElementValidityIfRootElement=_checkedElementValidityIfRootElement - In the implementation block
@property (assign,nonatomic) int parsingState;                                                  //@synthesize parsingState=_parsingState - In the implementation block
@property (assign,nonatomic) SEL parentElementSetter;                                           //@synthesize parentElementSetter=_parentElementSetter - In the implementation block
@property (nonatomic,retain) NSMutableData * characters;                                        //@synthesize characters=_characters - In the implementation block
@property (nonatomic,retain) NSMutableData * cDATA;                                             //@synthesize cDATA=_cDATA - In the implementation block
@property (nonatomic,retain) CoreDAVXMLElementGenerator * currentlyParsingSubItem;              //@synthesize currentlyParsingSubItem=_currentlyParsingSubItem - In the implementation block
@property (assign,nonatomic,__weak) CoreDAVXMLElementGenerator * parentGenerator;               //@synthesize parentGenerator=_parentGenerator - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedElementParseRules;                            //@synthesize cachedElementParseRules=_cachedElementParseRules - In the implementation block
@property (nonatomic,retain) CoreDAVItem * element;                                             //@synthesize element=_element - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                   //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableData *)characters;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 validationErrorOccurred:(id)arg2 ;
-(id)initWithParser:(id)arg1 parentGenerator:(id)arg2 parentElementSetter:(SEL)arg3 element:(id)arg4 ;
-(CoreDAVXMLElementGenerator *)parentGenerator;
-(BOOL)tracksRootElement;
-(BOOL)checkedElementValidityIfRootElement;
-(void)setCheckedElementValidityIfRootElement:(BOOL)arg1 ;
-(BOOL)isExpectedNameSpace:(id)arg1 andElementName:(id)arg2 ;
-(void)noteChildCascadingFailure;
-(void)notifyElement:(id)arg1 ofAttributesFound:(id)arg2 ;
-(NSDictionary *)cachedElementParseRules;
-(void)setCachedElementParseRules:(NSDictionary *)arg1 ;
-(void)setIsUnrecognized:(BOOL)arg1 ;
-(NSMutableData *)cDATA;
-(BOOL)isUnrecognized;
-(SEL)parentElementSetter;
-(void)setCharacters:(NSMutableData *)arg1 ;
-(void)setCDATA:(NSMutableData *)arg1 ;
-(void)resumeParsingWithParser:(id)arg1 ;
-(id)initWithParser:(id)arg1 baseURL:(id)arg2 rootElementNameSpace:(id)arg3 elementName:(id)arg4 parseClass:(Class)arg5 ;
-(void)setParentElementSetter:(SEL)arg1 ;
-(void)setParentGenerator:(CoreDAVXMLElementGenerator *)arg1 ;
-(void)setElement:(CoreDAVItem *)arg1 ;
-(int)parsingState;
-(void)setParsingState:(int)arg1 ;
-(CoreDAVXMLElementGenerator *)currentlyParsingSubItem;
-(void)setCurrentlyParsingSubItem:(CoreDAVXMLElementGenerator *)arg1 ;
-(CoreDAVItem *)element;
@end

