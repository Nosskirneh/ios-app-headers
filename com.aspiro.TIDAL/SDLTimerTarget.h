//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SDLTimerTargetDelegate;

@interface SDLTimerTarget : NSObject
{
    id <SDLTimerTargetDelegate> _delegate;
}

@property(nonatomic) __weak id <SDLTimerTargetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)timerElapsed;
- (id)initWithDelegate:(id)arg1;

@end

