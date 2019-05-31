/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNVCardLineFactory.h>

@protocol CNVCardLineFactory <NSObject>
@required
-(id)stringLineWithName:(id)arg1 value:(id)arg2;
-(id)versionPlaceholderLine;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
-(id)lineWithLiteralValue:(id)arg1;
-(id)dataLineWithName:(id)arg1 value:(id)arg2;

@end


@class NSString;

@interface CNVCardLineFactory : NSObject <CNVCardLineFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)version30LineFactory;
+(id)version21LineFactory;
-(id)stringLineWithName:(id)arg1 value:(id)arg2 ;
-(id)versionPlaceholderLine;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2 ;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3 ;
-(id)lineWithLiteralValue:(id)arg1 ;
-(id)dataLineWithName:(id)arg1 value:(id)arg2 ;
@end

