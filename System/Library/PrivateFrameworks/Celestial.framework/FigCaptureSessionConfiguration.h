/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, NSString;

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSMutableArray* _connections;
	long long _configurationID;
	BOOL _usesAppAudioSession;
	BOOL _configuresAppAudioSession;
	BOOL _allowedToRunInWindowedLayout;

}

@property (assign,nonatomic) long long configurationID;                         //@synthesize configurationID=_configurationID - In the implementation block
@property (nonatomic,readonly) NSArray * connectionConfigurations; 
@property (nonatomic,readonly) NSArray * sourceConfigurations; 
@property (nonatomic,readonly) NSArray * sinkConfigurations; 
@property (assign,nonatomic) BOOL usesAppAudioSession;                          //@synthesize usesAppAudioSession=_usesAppAudioSession - In the implementation block
@property (assign,nonatomic) BOOL configuresAppAudioSession;                    //@synthesize configuresAppAudioSession=_configuresAppAudioSession - In the implementation block
@property (assign,nonatomic) BOOL allowedToRunInWindowedLayout;                 //@synthesize allowedToRunInWindowedLayout=_allowedToRunInWindowedLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setConfigurationID:(long long)arg1 ;
-(long long)configurationID;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)allowedToRunInWindowedLayout;
-(NSArray *)connectionConfigurations;
-(NSArray *)sourceConfigurations;
-(BOOL)usesAppAudioSession;
-(BOOL)configuresAppAudioSession;
-(NSArray *)sinkConfigurations;
-(void)removeConnectionConfiguration:(id)arg1 ;
-(void)setUsesAppAudioSession:(BOOL)arg1 ;
-(void)setConfiguresAppAudioSession:(BOOL)arg1 ;
-(void)setAllowedToRunInWindowedLayout:(BOOL)arg1 ;
-(void)addConnectionConfiguration:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

