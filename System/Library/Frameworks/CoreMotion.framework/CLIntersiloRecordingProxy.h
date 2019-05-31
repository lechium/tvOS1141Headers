/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CLIntersiloProxy.h>

@class NSString, NSSet;

@interface CLIntersiloRecordingProxy : CLIntersiloProxy {

	long long _specialRole;
	NSString* _delegateName;
	shared_ptr<CMMsl::Writer>* _recordingWriter;
	NSSet* _triggeringDelegateNames;

}

@property (nonatomic,retain) NSSet * triggeringDelegateNames;              //@synthesize triggeringDelegateNames=_triggeringDelegateNames - In the implementation block
@property (nonatomic,copy,readonly) NSString * delegateName;               //@synthesize delegateName=_delegateName - In the implementation block
+(Class)initiatorRepresentingClass;
+(Class)recipientRepresentingClass;
+(id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 recipientName:(id)arg3 withInboundInterface:(id)arg4 inboundTriggerNames:(id)arg5 andOutboundInterface:(id)arg6 outboundTriggerNames:(id)arg7 recordingWriter:(shared_ptr<CMMsl::Writer>*)arg8 ;
-(void)setProxyPairRecordingInboundTriggerNames:(id)arg1 outboundTriggerNames:(id)arg2 ;
-(void)setProxyPairRecordingWriter:(shared_ptr<CMMsl::Writer>*)arg1 ;
-(void)setDelegateEntityName:(const char*)arg1 ;
-(NSString *)delegateName;
-(void)setTriggeringDelegateNames:(NSSet *)arg1 ;
-(void)setRecordingWriter:(shared_ptr<CMMsl::Writer>*)arg1 ;
-(NSSet *)triggeringDelegateNames;
-(BOOL)offsiloHandleInvocation:(id)arg1 selectorInfo:(id)arg2 peer:(id)arg3 ;
-(void)dispatchEncodedInvocation:(id)arg1 ;
-(void)dealloc;
@end
