//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MySpinFocusControlEvent : NSObject
{
    unsigned char _keyCode;
    unsigned short _keyAction;
    double _timestamp;
}

@property(readonly, nonatomic) unsigned short keyAction; // @synthesize keyAction=_keyAction;
@property(readonly, nonatomic) unsigned char keyCode; // @synthesize keyCode=_keyCode;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithCode:(unsigned char)arg1 andAction:(unsigned short)arg2 andTimestamp:(double)arg3;
- (id)init;

@end

