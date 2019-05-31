/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString, SAUIImageResource;

@interface SAUTSContentDetailPage : SAAceView

@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSString * utsId; 
+(id)contentDetailPage;
+(id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(SAUIImageResource *)image;
-(id)encodedClassName;
-(NSString *)utsId;
-(void)setUtsId:(NSString *)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(NSString *)contentType;
@end
