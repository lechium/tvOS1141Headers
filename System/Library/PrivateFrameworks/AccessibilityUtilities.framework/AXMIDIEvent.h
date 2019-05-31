/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXMIDIEvent : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _note;
	unsigned char _pressure;
	unsigned char _control;
	unsigned char _controlValue;
	unsigned char _program;
	unsigned short _channel;
	unsigned short _pitchBend;
	long long _type;

}

@property (assign,nonatomic) unsigned short channel;                               //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) long long ordinalChannel; 
@property (getter=isOmniChannel,nonatomic,readonly) BOOL omniChannel; 
@property (assign,nonatomic) long long type;                                       //@synthesize type=_type - In the implementation block
@property (getter=isDownEvent,nonatomic,readonly) BOOL downEvent; 
@property (assign,nonatomic) unsigned char note;                                   //@synthesize note=_note - In the implementation block
@property (nonatomic,readonly) long long noteValue; 
@property (nonatomic,readonly) unsigned char noteOctave; 
@property (assign,nonatomic) unsigned char pressure;                               //@synthesize pressure=_pressure - In the implementation block
@property (assign,nonatomic) unsigned char control;                                //@synthesize control=_control - In the implementation block
@property (assign,nonatomic) unsigned char controlValue;                           //@synthesize controlValue=_controlValue - In the implementation block
@property (assign,nonatomic) unsigned char program;                                //@synthesize program=_program - In the implementation block
@property (assign,nonatomic) unsigned short pitchBend;                             //@synthesize pitchBend=_pitchBend - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setChannel:(unsigned short)arg1 ;
-(unsigned short)channel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)control;
-(void)setControl:(unsigned char)arg1 ;
-(unsigned char)controlValue;
-(unsigned char)pressure;
-(void)setPressure:(unsigned char)arg1 ;
-(void)setControlValue:(unsigned char)arg1 ;
-(unsigned short)pitchBend;
-(void)setPitchBend:(unsigned short)arg1 ;
-(id)noteDescription;
-(long long)ordinalChannel;
-(long long)noteValue;
-(unsigned char)noteOctave;
-(BOOL)isDownEvent;
-(BOOL)isOmniChannel;
-(unsigned char)note;
-(void)setNote:(unsigned char)arg1 ;
-(unsigned char)program;
-(void)setProgram:(unsigned char)arg1 ;
@end

