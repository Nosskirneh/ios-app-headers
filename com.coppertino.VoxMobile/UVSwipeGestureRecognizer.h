//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISwipeGestureRecognizer.h>

@class NSMutableSet;

@interface UVSwipeGestureRecognizer : UISwipeGestureRecognizer
{
    NSMutableSet *GestureTouches;
    NSMutableSet *OtherRecognizers;
}

@property(retain, nonatomic) NSMutableSet *OtherRecognizers; // @synthesize OtherRecognizers;
@property(retain, nonatomic) NSMutableSet *GestureTouches; // @synthesize GestureTouches;
- (void).cxx_destruct;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

