/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface VCMediaNegotiatorAudioResults : NSObject {

	unsigned _remoteSSRC;
	unsigned _audioUnitModel;
	BOOL _allowRecording;
	BOOL _allowSwitching;
	int _primaryPayload;
	int _dtxPayload;
	int _redPayload;
	NSMutableArray* _secondaryPayloads;
	BOOL _useSBR;

}

@property (assign,nonatomic) unsigned remoteSSRC;                        //@synthesize remoteSSRC=_remoteSSRC - In the implementation block
@property (assign,nonatomic) unsigned audioUnitModel;                    //@synthesize audioUnitModel=_audioUnitModel - In the implementation block
@property (assign,nonatomic) BOOL allowRecording;                        //@synthesize allowRecording=_allowRecording - In the implementation block
@property (assign,nonatomic) BOOL allowSwitching;                        //@synthesize allowSwitching=_allowSwitching - In the implementation block
@property (assign,nonatomic) int primaryPayload;                         //@synthesize primaryPayload=_primaryPayload - In the implementation block
@property (assign,nonatomic) int dtxPayload;                             //@synthesize dtxPayload=_dtxPayload - In the implementation block
@property (assign,nonatomic) int redPayload;                             //@synthesize redPayload=_redPayload - In the implementation block
@property (nonatomic,readonly) NSArray * secondaryPayloads;              //@synthesize secondaryPayloads=_secondaryPayloads - In the implementation block
@property (assign,nonatomic) BOOL useSBR;                                //@synthesize useSBR=_useSBR - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setAudioUnitModel:(unsigned)arg1 ;
-(unsigned)audioUnitModel;
-(BOOL)useSBR;
-(void)setUseSBR:(BOOL)arg1 ;
-(NSArray *)secondaryPayloads;
-(BOOL)allowSwitching;
-(BOOL)allowRecording;
-(int)primaryPayload;
-(int)dtxPayload;
-(int)redPayload;
-(void)addSecondaryPayload:(int)arg1 ;
-(void)setPrimaryPayload:(int)arg1 ;
-(void)setDtxPayload:(int)arg1 ;
-(void)setRedPayload:(int)arg1 ;
-(void)setAllowRecording:(BOOL)arg1 ;
-(void)setAllowSwitching:(BOOL)arg1 ;
-(void)setRemoteSSRC:(unsigned)arg1 ;
-(unsigned)remoteSSRC;
@end
