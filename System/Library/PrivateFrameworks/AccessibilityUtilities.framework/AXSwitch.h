/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, AXMIDIEvent;

@interface AXSwitch : NSObject <NSSecureCoding> {

	unsigned short _keyCode;
	long long _action;
	long long _longPressAction;
	NSString* _name;
	NSString* _source;
	NSString* _type;
	NSString* _productName;
	NSString* _manufacturerName;
	NSUUID* _uuid;
	long long _buttonNumber;
	long long _headSwitch;
	AXMIDIEvent* _midiEvent;
	NSString* _remoteSwitchIdentifier;
	NSString* _remoteDeviceName;
	NSString* _remoteDeviceIdentifier;

}

@property (nonatomic,retain) NSUUID * uuid;                                        //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long action;                                     //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long longPressAction;                            //@synthesize longPressAction=_longPressAction - In the implementation block
@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * source;                                    //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * localizedSourceDescription; 
@property (nonatomic,retain) NSString * type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * productName;                                 //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy) NSString * manufacturerName;                            //@synthesize manufacturerName=_manufacturerName - In the implementation block
@property (nonatomic,readonly) BOOL hasLongPressAction; 
@property (nonatomic,readonly) BOOL supportsLongPress; 
@property (assign,nonatomic) unsigned short keyCode;                               //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) long long buttonNumber;                               //@synthesize buttonNumber=_buttonNumber - In the implementation block
@property (assign,nonatomic) long long headSwitch;                                 //@synthesize headSwitch=_headSwitch - In the implementation block
@property (nonatomic,retain) AXMIDIEvent * midiEvent;                              //@synthesize midiEvent=_midiEvent - In the implementation block
@property (nonatomic,copy) NSString * remoteSwitchIdentifier;                      //@synthesize remoteSwitchIdentifier=_remoteSwitchIdentifier - In the implementation block
@property (nonatomic,copy) NSString * remoteDeviceName;                            //@synthesize remoteDeviceName=_remoteDeviceName - In the implementation block
@property (nonatomic,copy) NSString * remoteDeviceIdentifier;                      //@synthesize remoteDeviceIdentifier=_remoteDeviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)switchWithAction:(long long)arg1 name:(id)arg2 source:(NSString*)arg3 type:(NSString*)arg4 ;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setSource:(NSString *)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(long long)longPressAction;
-(NSString *)source;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned short)keyCode;
-(long long)buttonNumber;
-(AXMIDIEvent *)midiEvent;
-(void)setKeyCode:(unsigned short)arg1 ;
-(void)setMidiEvent:(AXMIDIEvent *)arg1 ;
-(void)setButtonNumber:(long long)arg1 ;
-(void)setLongPressAction:(long long)arg1 ;
-(BOOL)supportsLongPress;
-(long long)headSwitch;
-(NSString *)remoteSwitchIdentifier;
-(NSString *)remoteDeviceName;
-(NSString *)remoteDeviceIdentifier;
-(id)initWithAction:(long long)arg1 name:(id)arg2 source:(NSString*)arg3 type:(NSString*)arg4 ;
-(BOOL)hasLongPressAction;
-(NSString *)localizedSourceDescription;
-(void)setHeadSwitch:(long long)arg1 ;
-(void)setRemoteSwitchIdentifier:(NSString *)arg1 ;
-(void)setRemoteDeviceName:(NSString *)arg1 ;
-(void)setRemoteDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)manufacturerName;
-(void)setManufacturerName:(NSString *)arg1 ;
@end

