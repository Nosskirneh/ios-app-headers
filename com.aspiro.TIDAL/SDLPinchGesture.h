//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SDLTouch;

@interface SDLPinchGesture : NSObject
{
    double _distance;
    SDLTouch *_firstTouch;
    SDLTouch *_secondTouch;
    struct CGPoint _center;
}

@property(retain, nonatomic) SDLTouch *secondTouch; // @synthesize secondTouch=_secondTouch;
@property(retain, nonatomic) SDLTouch *firstTouch; // @synthesize firstTouch=_firstTouch;
- (void).cxx_destruct;
- (void)sdl_invalidate;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) double distance; // @synthesize distance=_distance;
- (id)initWithFirstTouch:(id)arg1 secondTouch:(id)arg2;

@end

