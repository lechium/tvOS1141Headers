/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, ISURLOperation, NSString;

@interface IKLoadRecord : NSObject {

	BOOL _loadCompleted;
	NSURL* _URL;
	ISURLOperation* _opertaion;
	NSString* _scriptStr;

}

@property (nonatomic,retain) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) ISURLOperation * opertaion;              //@synthesize opertaion=_opertaion - In the implementation block
@property (assign,nonatomic) BOOL loadCompleted;                      //@synthesize loadCompleted=_loadCompleted - In the implementation block
@property (nonatomic,retain) NSString * scriptStr;                    //@synthesize scriptStr=_scriptStr - In the implementation block
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(ISURLOperation *)opertaion;
-(void)setOpertaion:(ISURLOperation *)arg1 ;
-(BOOL)loadCompleted;
-(void)setLoadCompleted:(BOOL)arg1 ;
-(NSString *)scriptStr;
-(void)setScriptStr:(NSString *)arg1 ;
@end

