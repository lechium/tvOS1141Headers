/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>

@class TVLHeaderWithCountAndButtonsElement, TVLInitialSelectionElement, NSArray, NSString;

@interface TVLMediaBrowserElement : TVLRootElement {

	TVLHeaderWithCountAndButtonsElement* _header;
	TVLInitialSelectionElement* _initialSelection;
	NSArray* _items;
	NSString* _gridLayout;

}

@property (nonatomic,retain) TVLHeaderWithCountAndButtonsElement * header;               //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) TVLInitialSelectionElement * initialSelection;              //@synthesize initialSelection=_initialSelection - In the implementation block
@property (nonatomic,retain) NSArray * items;                                            //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * gridLayout;                                      //@synthesize gridLayout=_gridLayout - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setInitialSelection:(TVLInitialSelectionElement *)arg1 ;
-(TVLInitialSelectionElement *)initialSelection;
-(void)setHeader:(TVLHeaderWithCountAndButtonsElement *)arg1 ;
-(TVLHeaderWithCountAndButtonsElement *)header;
-(void)setGridLayout:(NSString *)arg1 ;
-(NSString *)gridLayout;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
@end
