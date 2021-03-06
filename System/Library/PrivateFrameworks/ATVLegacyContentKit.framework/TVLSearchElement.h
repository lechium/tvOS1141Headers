/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>

@class TVLHeaderElement, NSString;

@interface TVLSearchElement : TVLRootElement {

	BOOL _showPreview;
	BOOL _searchesEmptyString;
	TVLHeaderElement* _header;
	NSString* _baseURL;
	NSString* _initialSearchString;

}

@property (nonatomic,retain) TVLHeaderElement * header;                 //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * baseURL;                          //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) BOOL showPreview;                          //@synthesize showPreview=_showPreview - In the implementation block
@property (assign,nonatomic) BOOL searchesEmptyString;                  //@synthesize searchesEmptyString=_searchesEmptyString - In the implementation block
@property (nonatomic,copy) NSString * initialSearchString;              //@synthesize initialSearchString=_initialSearchString - In the implementation block
-(NSString *)baseURL;
-(void)setBaseURL:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHeader:(TVLHeaderElement *)arg1 ;
-(TVLHeaderElement *)header;
-(BOOL)showPreview;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(NSString *)initialSearchString;
-(BOOL)searchesEmptyString;
-(void)setShowPreview:(BOOL)arg1 ;
-(void)setSearchesEmptyString:(BOOL)arg1 ;
-(void)setInitialSearchString:(NSString *)arg1 ;
@end

