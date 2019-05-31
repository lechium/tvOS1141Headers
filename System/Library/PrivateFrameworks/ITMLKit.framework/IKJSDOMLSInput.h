/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IKJSDOMLSInput <JSExport>
@property (nonatomic,retain) id byteStream; 
@property (nonatomic,retain) NSString * stringData; 
@property (nonatomic,retain) NSString * encoding; 
@property (assign,nonatomic) BOOL certifiedText; 
@required
-(void)setEncoding:(id)arg1;
-(id)byteStream;
-(void)setByteStream:(id)arg1;
-(BOOL)certifiedText;
-(void)setCertifiedText:(BOOL)arg1;
-(NSString *)encoding;
-(void)setStringData:(id)arg1;
-(NSString *)stringData;

@end

