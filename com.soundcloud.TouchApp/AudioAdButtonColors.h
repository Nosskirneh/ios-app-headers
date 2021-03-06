//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface AudioAdButtonColors : NSObject
{
    UIColor *_defaultBackgroundColor;
    UIColor *_defaultTextColor;
    UIColor *_pressedBackgroundColor;
    UIColor *_pressedTextColor;
}

@property(readonly, nonatomic) UIColor *pressedTextColor; // @synthesize pressedTextColor=_pressedTextColor;
@property(readonly, nonatomic) UIColor *pressedBackgroundColor; // @synthesize pressedBackgroundColor=_pressedBackgroundColor;
@property(readonly, nonatomic) UIColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property(readonly, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
- (void).cxx_destruct;
- (id)initWithDefaultBackgroundColor:(id)arg1 defaultTextColor:(id)arg2 pressedBackgroundColor:(id)arg3 pressedTextColor:(id)arg4;

@end

