/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, SAUITemplateEdgeInsets;


@protocol SAUITemplateItem <SAAceSerializable>
@property (nonatomic,copy) NSArray * communicationOptions; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * fullScreenPaddingDelta; 
@property (assign,nonatomic) BOOL hasPriorityLayout; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * padding; 
@property (nonatomic,copy) NSArray * presentationOptions; 
@property (assign,nonatomic) BOOL shouldBeOffscreenInPartial; 
@required
-(void)setPadding:(id)arg1;
-(SAUITemplateEdgeInsets *)padding;
-(NSArray *)communicationOptions;
-(void)setCommunicationOptions:(id)arg1;
-(SAUITemplateEdgeInsets *)fullScreenPaddingDelta;
-(void)setFullScreenPaddingDelta:(id)arg1;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1;
-(NSArray *)presentationOptions;
-(void)setPresentationOptions:(id)arg1;
-(BOOL)shouldBeOffscreenInPartial;
-(void)setShouldBeOffscreenInPartial:(BOOL)arg1;

@end
