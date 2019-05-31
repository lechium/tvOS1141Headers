/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class SAUIDecoratedText, SASTTemplateStarRating, NSString;

@interface SASTLocationListItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (nonatomic,retain) SAUIDecoratedText * formattedDistance; 
@property (nonatomic,retain) SASTTemplateStarRating * rating; 
@property (nonatomic,retain) SAUIDecoratedText * subtitle; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)locationListItem;
+(id)locationListItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASTTemplateStarRating *)rating;
-(void)setRating:(SASTTemplateStarRating *)arg1 ;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)title;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(void)setSubtitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)subtitle;
-(id)encodedClassName;
-(SAUIDecoratedText *)formattedDistance;
-(void)setFormattedDistance:(SAUIDecoratedText *)arg1 ;
@end

